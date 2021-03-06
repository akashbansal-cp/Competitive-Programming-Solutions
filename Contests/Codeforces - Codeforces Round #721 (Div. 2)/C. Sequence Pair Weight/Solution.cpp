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
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    map<int,vector<int>> mp;
    for(int i=0;i<n;++i){
        mp[data[i]].push_back(i+1);
    }
    vector<int> slv;
    vector<int> sz;
    ll ans=0;
    for(auto e:mp){
        slv=e.second;
        sz.resize(slv.size());
        ll p=0;
        for(int i=slv.size()-1;i>=0;--i){
            sz[i]=n-slv[i]+1;
            p+=sz[i];
        }
        for(int i=0;i<slv.size();++i){
            p-=sz[i];
            ans+=(p*slv[i]);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fio
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
