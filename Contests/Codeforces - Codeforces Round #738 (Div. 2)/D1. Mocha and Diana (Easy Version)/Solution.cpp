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
int s[2][1002];
int find(int idx,int v){
    if(s[idx][v]!=v)return s[idx][v]=find(idx,s[idx][v]);
    return v;
}
void join(int idx,int u,int v){
    u=find(idx,u);
    v=find(idx,v);
    s[idx][v]=u;
}
void solve(){
    for(int i=0;i<1002;++i)s[0][i]=i,s[1][i]=i;
    int n,m1,m2;cin>>n>>m1>>m2;
    int u,v;
    for(int i=0;i<m1;++i){
        cin>>u>>v;
        join(0,u,v);
    }
    for(int i=0;i<m2;++i){
        cin>>u>>v;
        join(1,u,v);
    }
    vector<pair<int,int>> ans;
    for(int i=1;i<=n;++i){
        for(int j=i+1;j<=n;++j){
            if(find(0,i)!=find(0,j) && find(1,i)!=find(1,j)){
                ans.push_back({i,j});
                join(0,i,j);
                join(1,i,j);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto e:ans){
        cout<<e.first<<' '<<e.second<<endl;
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
