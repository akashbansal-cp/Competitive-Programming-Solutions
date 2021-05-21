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
    vector<int> u(n);
    for(int i=0;i<n;++i)cin>>u[i];
    vector<ll> s(n);
    for(int i=0;i<n;++i)cin>>s[i];
    vector<vector<ll>> data(n);
    for(int i=0;i<n;++i)
        data[u[i]-1].push_back(s[i]);
    for(int i=0;i<n;++i)sort(data[i].begin(),data[i].end(),greater<ll>());
    for(int i=0;i<n;++i){
        for(int j=1;j<data[i].size();++j){
            data[i][j]+=data[i][j-1];
        }
    }
    vector<ll> ans(n,0);
    for(int i=0;i<n;++i){
        int x=data[i].size();
        for(int j=0;j<x;++j){
            int p=x%(j+1);
            ans[j]+=data[i][x-1-p];
        }
    }
    for(ll e:ans)cout<<e<<' ';
    cout<<endl;
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
