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
vector<int> getComp(int n,vector<vector<int>> edges){
    queue<int> q;
    vector<bool> visited(n,false);
    vector<int> comp(n,-1);
    vector<int> par(n);
    par[0]=-1;
    int cc=1;
    for(int i=0;i<n;++i){
        if(visited[i]==false){
            visited[i]=true;
            comp[i]=cc;
            q.push(i);
            while(q.empty()==false){
                int x=q.front();
                q.pop();
                for(int e:edges[x]){
                    if(par[x]!=e && visited[e]==false){
                        par[e]=x;
                        visited[e]=true;
                        comp[e]=cc;
                        q.push(e);
                    }
                }
            }
            ++cc;
        }
    }
    return comp;
}
void solve()
{
    int n;cin>>n;
    int m1,m2;cin>>m1>>m2;
    vector<vector<int>> e1(n),e2(n);
    int u,v;
    for(int i=0;i<m1;++i){
        cin>>u>>v;
        e1[u-1].push_back(v-1);
        e1[v-1].push_back(u-1);
    }
    for(int i=0;i<m2;++i){
        cin>>u>>v;
        e2[u-1].push_back(v-1);
        e2[v-1].push_back(u-1);
    }
    vector<int> c1=getComp(n,e1);
    vector<int> c2=getComp(n,e2);
    // for(int e:c1)cout<<e<<' ';cout<<endl;
    // for(int e:c2)cout<<e<<' ';cout<<endl;
    
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
