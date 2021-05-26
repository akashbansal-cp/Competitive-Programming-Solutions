#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
// vector<bool> visited;
vector<vector<int>> edges;
vector<int> val;
map<ll,ll> dfs(int n,int par){
    map<ll,ll> fin;
    map<ll,ll> temp;
    if(edges[n].size()==1 && edges[n][0]==par){
        fin[val[n]]=1;
    }
    for(int i=0;i<edges[n].size();++i){
        if(edges[n][i]==par)continue;
        temp=dfs(edges[n][i],n);
        for(auto e:temp){
            fin[e.first]+=e.second;
            fin[e.first]%=MOD;
        }
    }
    ll cur_ans=0;
    for(auto e:fin){
        cur_ans+=e.second;
        cur_ans%=MOD;
    }
    fin[val[n]]=cur_ans;
    return fin;
}

void solve()
{
    edges={},val={};
    int n;cin>>n;
    edges.resize(n);
    val.resize(n);
    int u,v;
    for(int i=0;i<n-1;++i){
        cin>>u>>v;
        edges[u-1].push_back(v-1);
        edges[v-1].push_back(u-1);
    }
    for(int i=0;i<n;++i){
        cin>>val[i];
    }
    if(n==1){
        cout<<1<<endl;return;
    }
    map<ll,ll> fin=dfs(0,-1);
    ll ans=0;
    for(auto  e:fin){
        ans+=e.second;
        ans%=MOD;
    }
    cout<<ans<<endl;
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
