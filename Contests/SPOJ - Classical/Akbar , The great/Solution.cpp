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
    int n,r,m,u,v;
    cin>>n>>r>>m;
    vector<vector<int>> edges(n);
    for(int i=0;i<r;++i){
        cin>>u>>v;
        --u,--v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    vector<pair<int,int>> sol(m);
    for(int i=0;i<m;++i){
        cin>>sol[i].first>>sol[i].second;
        --sol[i].first;
    }
    // for(auto e:edges){
    //     for(int f:e)cout<<f<<' ';cout<<endl;
    // }
    // for(auto e:sol)cout<<e.first<<' '<<e.second<<endl;
    vector<bool> saved(n,false);
    for(int i=0;i<m;++i){
        vector<bool> visited(n,false);
        queue<pair<int,int>> q;
        q.push(sol[i]);
        // cout<<sol[i].first<<' '<<sol[i].second<<endl;
        visited[sol[i].first]=true;
        pair<int,int> p;
        if(saved[sol[i].first]==false){
            saved[sol[i].first]=true;
        }
        else{
            cout<<"No\n";
            // cout<<i<<' '<<"1No"<<endl;
            return;
        }
        while(q.empty()==false){
            // cout<<q.size()<<'i';
            int a=q.front().first,b=q.front().second;
            q.pop();
            if(b==0)continue;
            for(int j=0;j<edges[a].size();++j){
                if(visited[edges[a][j]]==false){
                    visited[edges[a][j]]=true;
                    if(saved[edges[a][j]]==true){
                        cout<<"No\n";return;
                        // cout<<"2No"<<endl;return;
                    }
                    else{
                        saved[edges[a][j]]=true;
                        q.push({edges[a][j],b-1});
                    }
                }
            }
            // cout<<q.size()<<endl;
        }
        // cout<<"``"<<q.size()<<endl;
    }
    // for(bool e:saved)cout<<e<<' ';cout<<endl;
    for(bool e:saved){
        if(e==false){
            cout<<"No\n";
            // cout<<"3No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
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
