#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
int lca (int u,int v,vector<int>& depth,vector<vector<int>>& parent,int level){
    if(depth[v] < depth[u])swap(u,v);
    int diff = depth[v]-depth[u];

    // step1-no understanding
    for(int i=0;i<level;++i){
        if((diff>>i)&1)
            v=parent[v][i];
    }

    if(u==v)return u;

    for(int i=level-1;i>=0;--i){
        if(parent[u][i]!=parent[v][i]){
            u=parent[u][i];
            v=parent[v][i];
        }
    }
    return parent[u][0];
    return  0;
}
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> edges(n);
    int u,v;
    for(int i=0;i<n-1;++i){
        cin>>u>>v;
        --u,--v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    vector<int> depth(n);
    int level = ceil(log((double)n));
    vector<vector<int>> parent(n,vector<int> (level,-1));
    depth[0]=1;
    stack<int> dfs;
    dfs.push(0);
    vector<bool> visited(n,false);
    visited[0]=true;
    while(dfs.empty()==false){
        int x=dfs.top();
        dfs.pop();
        for(int i=0;i<edges[x].size();++i){
            if(visited[edges[x][i]]==false){
                parent[edges[x][i]][0]=x;
                depth[edges[x][i]]=depth[x]+1;
                dfs.push(edges[x][i]);
                visited[edges[x][i]]=true;
            }
        }
    }
    
    for(int i=1;i<level;++i){
        for(int j=0;j<n;++j){
            if(parent[j][i-1]!=-1)
                parent[j][i]=parent[parent[j][i-1]][i-1];
        }
    }

    int q;
    cin>>q;
    for(int t=0;t<q;++t){
        int k;cin>>k;
        vector<int> data(k);
        for(int i=0;i<k;++i){cin>>data[i];}
        if(k==1){
            cout<<"YES\n";
            continue;
        }
        u=data[0],v=data[1];
        int x,y;
        int p=lca(data[0],data[1],depth,parent,level);
        // bool found =  true;
        // for(int j=2;j<k;++j){
        //     x=lca(u,data[j],depth,parent,level);
        //     y=lca(v,data[j],depth,parent,level);
        //     if((x==data[j] && y==p) || (x==p && y==data[j]));
        //     else if(x==u)u=data[j];
        //     else if(y==v)v=data[j];
        //     else {
        //         found = false;
        //         break;
        //     }
        // }
        // if(found == false)cout<<"NO\n";
        // else cout<<"YES\n";
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
