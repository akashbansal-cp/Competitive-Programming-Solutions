#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
int get(vector<pair<int,int>>& data,int i,int j){
    // cout<<endl<<data[i].first<<' '<<data[i].second<<' '<<data[j].first<<' '<<data[j].second<<endl;
    if(i==j)return 0;
    if((data[i].first==data[j].first)||(data[i].second==data[j].second))return 1;
    if(abs(data[i].first-data[j].first)==abs(data[i].second-data[j].second))return 1;
    return 2;
}
void solve()
{
    int n;cin>>n;
    vector<pair<int,int>> data(n);
    for(int i=0;i<n;++i)cin>>data[i].first;
    for(int i=0;i<n;++i)cin>>data[i].second;
    // for(int i=0;i<n;++i)cin>>data[i].first>>data[i].second;
    int ans = 2*n;
    for(int i=0;i<n;++i){
        int a=0;
        for(int j=0;j<n;++j){
            a+=get(data,i,j);
            // cout<<get(data,i,j)<<' ';
        }
        // cout<<endl;
        // cout<<a<<' ';   
        ans=min(a,ans);
    }
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
