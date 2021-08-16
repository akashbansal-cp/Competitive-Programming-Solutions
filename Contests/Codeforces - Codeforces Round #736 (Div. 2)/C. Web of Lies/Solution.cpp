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
    int n,m;cin>>n>>m;
    int u,v;
    vector<int> kill(n,0);
    int z=0;
    // vector<vector<bool>> frnd(n,vector<bool> (n,false));
    for(int i=0;i<m;++i){
        cin>>u>>v;
        --u,--v;
        if(u>v)swap(u,v);
        // frnd[u][v]=true;
        kill[u]++;
        if(kill[u]==1)++z;
    }
    int q;cin>>q;
    int t;
    for(int i=0;i<q;++i){
        cin>>t;
        if(t!=3)cin>>u>>v;
        if(t==1){
            --u,--v;
            if(u>v)swap(u,v);
            // frnd[u][v]=true;
            kill[u]++;
            if(kill[u]==1)++z;
        }
        if(t==2){
            --u,--v;
            if(u>v)swap(u,v);
            // frnd[u][v]=false;
            kill[u]--;
            if(kill[u]==0)--z;
        }
        if(t==3){
            cout<<n-z<<endl;
        }
    }
    
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
