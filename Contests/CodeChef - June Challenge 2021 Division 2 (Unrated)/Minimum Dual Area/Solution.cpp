#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll getAns(vector<pair<int,int>> cord,int n){
    ll ans=LLONG_MAX;
    sort(cord.begin(),cord.end());
    vector<pair<int,int>> left(n);
    left[0].first=cord[0].second;
    left[0].second=cord[0].second;
    for(int i=1;i<n;++i){
        left[i].first=min(left[i-1].first,cord[i].second);
        left[i].second=max(left[i-1].second,cord[i].second);
    }
    vector<pair<int,int>> right(n);
    right[n-1].first=cord[n-1].second;
    right[n-1].second=cord[n-1].second;
    for(int i=n-2;i>=0;--i){
        right[i].first=min(right[i+1].first,cord[i].second);
        right[i].second=max(right[i+1].second,cord[i].second);
    }
    ll a_x,b_x,a_y,b_y;
    a_x=cord[n-1].first-cord[0].first;
    a_y=left[n-1].second-left[n-1].first;
    ans=a_x*a_y;
    for(int i=0;i<n-1;++i){
        a_x=cord[i].first-cord[0].first;
        b_x=cord[n-1].first-cord[i+1].first;
        a_y=left[i].second-left[i].first;
        b_y=right[i+1].second-right[i+1].first;
        a_x*=a_y;
        b_x*=b_y;
        a_x+=b_x;
        ans=min(ans,a_x);
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> cord(n);
    for(int i=0;i<n;++i)cin>>cord[i].first>>cord[i].second;
    ll  ans=LLONG_MAX;
    ans=min(ans,getAns(cord,n));
    for(int i=0;i<n;++i)swap(cord[i].first,cord[i].second);
    ans=min(ans,getAns(cord,n));
    cout<<ans<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
