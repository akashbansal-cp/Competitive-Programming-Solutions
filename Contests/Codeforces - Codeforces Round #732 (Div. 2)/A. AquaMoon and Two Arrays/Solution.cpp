#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    int sa=0,sb=0;
    for(int i=0;i<n;++i)sa+=a[i];
    for(int i=0;i<n;++i)sb+=b[i];
    if(sa!=sb){
        cout<<-1<<endl;
        return;
    }
    vector<pair<int,int>> inc;
    vector<pair<int,int>> dec;
    for(int i=0;i<n;++i){
        if(a[i]<b[i])inc.push_back({i+1,b[i]-a[i]});
        if(a[i]>b[i])dec.push_back({i+1,a[i]-b[i]});
    }
    // for(auto e:inc)cout<<e.first<<' '<<e.second<<endl;
    // for(auto e:dec)cout<<e.first<<' '<<e.second<<endl;
    int p=0;
    for(int i=0;i<inc.size();++i){
        p+=inc[i].second;
    }
    cout<<p<<endl;
    int x=0,y=0;
    for(int i=0;i<p;++i){
        cout<<dec[y].first<<' '<<inc[x].first<<endl;
        --inc[x].second;
        --dec[y].second;
        if(inc[x].second==0)++x;
        if(dec[y].second==0)++y;
    }
    
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
