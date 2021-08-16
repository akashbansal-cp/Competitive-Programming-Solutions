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
ll modPow(ll x,ll y){
    ll ans=1;
    while(y!=0){
        if(y&1){
            --y;
            ans*=x;
            ans%=MOD;
        }
        else{
            y/=2;
            x*=x;
            x%=MOD;
        }
    }
    return ans;
}
ll ncr (ll n,ll r,vector<ll>& fact){
    ll n_f=fact[n];
    ll r_f=fact[r];
    ll nr_f=fact[n-r];
    r_f*=nr_f;
    r_f%=MOD;
    r_f=modPow(r_f,MOD-2);
    n_f*=r_f;
    n_f%=MOD;
    return n_f;
}
void bfs(vector<int>& parents,vector<vector<int>>& edges,int n,int r){
    queue<int> b;
    b.push(r);
    vector<bool> visited(n,false);
    visited[r]=true;
    while(b.size()!=0){
        int _r=b.front();
        b.pop();
        for(int i=0;i<edges[_r].size();++i){
            if(visited[edges[_r][i]]==false){
                parents[edges[_r][i]]=_r;
                visited[edges[_r][i]]=true;
                b.push(edges[_r][i]);
            }
        }
    }
}
void pushChilds(stack<vector<int>>& states,vector<vector<int>>& edges,vector<int>& childs,vector<int>& parents,vector<int>& nc,int s){
    if(s >= childs.size()){
        if(nc.size()!=0){
            // states.push(nc);
        }
        return;
    }
    if(edges[childs[s]].size()<2)pushChilds(states,edges,childs,parents,nc,s+1);
    else{
        int p=nc.size();
        nc.push_back(0);
        for(int i=0;i<edges[childs[s]].size();++i){
            if(parents[childs[s]]!=edges[childs[s]][i]){
                nc[p]=edges[childs[s]][i];
                pushChilds(states,edges,childs,parents,nc,s+1);
            }
        }
        nc.pop_back();
    }
}
int slv(vector<vector<int>>&  edges,int n,int r,int k,vector<ll>& fact){
    vector<int> childs;
    vector<int> parents(n,-1);
    bfs(parents,edges,n,r);
    stack<vector<int>> states;
    childs=edges[r];
    int ans = 0;
    vector<int> _p;
    states.push(childs);
    while(states.empty()==false){
        childs = states.top();
        states.pop();
        if(k <= childs.size()){
            ans += ncr((ll)childs.size(),(ll)k,fact);
        }
        ans %= MOD;
        // _p.clear();
        pushChilds(states,edges,childs,parents,_p,0);
        // _p.clear();
    }
    return ans;
}
void solve(vector<ll>& fact)
{
    int n,k;cin>>n>>k;
    vector<vector<int>> edges(n);
    int u,v;
    for(int i=0;i<n-1;++i){
        cin>>u>>v;
        --u,--v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    int ans = 0;
    if(k==2){
        ans=n*(n-1);
        ans/=2;
        cout<<ans<<endl;return;
    }
    for(int i=0;i<n;++i){
        ans += slv(edges,n,i,k,fact);
        ans %= MOD;
    }
    cout<<ans<<endl;
}
int main()
{
    vector<ll> fact(101);
    fact[0]=1;
    for(int i=1;i<101;++i)fact[i]=(fact[i-1]*i)%MOD;
    fio
    int t;
    cin >> t;
    while (t--)
        solve(fact);
    return 0;
}