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
int _p=0;
bool _dfs(vector<vector<int>>& data,int x,vector<int>& par){
    int p=0;
    for(int i=0;i<data[x].size();++i){
        if(par[x]==data[x][i])continue;
        if(_dfs(data,data[x][i],par)==false)++p;
    }
    if(p==0)
        return false;
    _p+=(p-1);
    // _p=max(_p,p);
    return true;
}
void solve()
{
    _p=1;
    int n;cin>>n;
    vector<vector<int>> data(n);
    int u,v;
    for(int i=0;i<n-1;++i){
        cin>>u>>v;
        data[u-1].push_back(v-1);
        data[v-1].push_back(u-1);
    }
    vector<int> par(n);
    vector<bool> visited(n,false);
    stack<int> dfs;
    dfs.push(0);
    visited[0]=true,par[0]=-1;
    while(dfs.empty()==false){
        int x=dfs.top();
        dfs.pop();
        for(int i=0;i<data[x].size();++i){
            if(visited[data[x][i]]==false){
                visited[data[x][i]]=true;
                dfs.push(data[x][i]);
                par[data[x][i]]=x;
            }
        }
    }
    int q=0;
    for(int i=0;i<data[0].size();++i){
        if(_dfs(data,data[0][i],par)==false)++q;
    }
    if(q==0)cout<<_p<<endl;
    // else if(_p==0)cout<<q<<endl;
    else cout<<_p-1+q<<endl;
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
