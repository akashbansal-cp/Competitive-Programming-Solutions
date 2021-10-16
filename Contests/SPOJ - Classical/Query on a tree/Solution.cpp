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
void solve()
{
    int n;cin>>n;
    int u,v,c;
    vector<vector<int>> edges(n);
    vector<int> cost(n);
    for(int i=0;i<n-1;++i){
        cin>>u>>v>>c;
        --u,--v;
        edges[u].push_back(v);
        edges[v].push_back(u);
        
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
