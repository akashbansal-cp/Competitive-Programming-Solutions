#define ll long long
#define INF 1000000000000000
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> edges(n);
    vector<vector<ll>> weights(n);
    int u,v,w;
    for(int i=0;i<m;++i){
        cin>>u>>v>>w;
        edges[u-1].push_back(v-1);
        edges[v-1].push_back(u-1);
        weights[v-1].push_back(w);
        weights[u-1].push_back(w);
    }  
    vector<bool> visited(n,false);
    vector<vector<ll>> dis(n,vector<ll>(3));
    dis[0]={0,0,0};
    for(int i=0;i<n;++i){
        dis[i]={INF,INF,0};
    }
    set<pair<array<ll,3>,ll>> data;
    data.insert({{0,0,0},0});
    for(int i=1;i<n;++i){
        data.insert({{INF,INF,0},i});
    }
    for(int i=0;i<n;++i){
        int x=(*data.begin()).first;
        if(dis[x][0]==INF)
            break;
        visited[x]=true;
        data.erase(data.begin());
        for(int j=0;j<edges[x].size();++j){
            int p=edges[x][j];
            if(visited[p]==false){
                if(dis[p][0] == INF || dis[p][0] - dis[p][1] + dis[p][2] > dis[x][0] + weights[x][j] - min(dis[x][1],weights[x][j]) + max(dis[x][2],weights[x][j]) ){
                    data.erase({p,{dis[p][0],dis[p][1],dis[p][2]}});
                    dis[p][0]=dis[x][0] + weights[x][j];
                    dis[p][1]=min(dis[x][1],weights[x][j]);
                    dis[p][2]=max(dis[x][2],weights[x][j]);
                    data.insert({p,{dis[p][0],dis[p][1],dis[p][2]}});
                }
            }
        }
    }
    for(int i=1;i<n;++i){
        if(dis[i][0]==INF)
            cout<<-1;
        else
            cout<<dis[i][0]-dis[i][1]+dis[i][2];
        cout<<' ';
    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
