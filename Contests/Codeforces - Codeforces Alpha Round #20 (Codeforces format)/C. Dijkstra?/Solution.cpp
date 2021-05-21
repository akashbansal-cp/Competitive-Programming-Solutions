#define ll long long
#define INF 1000000000000
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> weight(n);
    vector<vector<ll>> edges(n);
    for(ll i=0;i<m;++i){
        ll x,y,w;
        cin>>x>>y>>w;
        if(x!=y){
            edges[x-1].push_back(y-1);
            edges[y-1].push_back(x-1);
            weight[x-1].push_back(w);
            weight[y-1].push_back(w);
        }
    }
    vector<ll> dis(n,INF);
    dis[0]=0;
    set<pair<ll,ll>> distance;
    distance.insert({0,0});
    for(ll i=1;i<n;++i)
        distance.insert({INF,i});
    vector<ll> preceders(n,-1);
    vector<bool> visited(n,false);
    for(ll i=0;i<n;++i){
        if((*distance.begin()).first == INF)
            break;
        ll x = (*distance.begin()).second;
        distance.erase(distance.begin());
        visited[x]=true;
        for(ll j=0;j<edges[x].size();++j){
            int m=edges[x][j];
            if(visited[m]==false){
                if(dis[m] > dis[x]+weight[x][j]){
                    distance.erase({m,dis[m]});
                    dis[m]=dis[x]+weight[x][j];
                    preceders[m]=x;
                    distance.insert({dis[m],m});
                }
            }
        }
    }
    vector<ll> ans;
    ans.push_back(n);
    if(preceders[n-1]==-1){
        cout<<-1;
        return;
    }
    else{
        int j=preceders[n-1];
        while(j!=-1){
            ans.push_back(j+1);
            j=preceders[j];
        }
    }
    for(int i=ans.size()-1;i>=0;--i){
        cout<<ans[i]<<' ';
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
