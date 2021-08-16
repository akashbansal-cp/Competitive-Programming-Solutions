#include<bits/stdc++.h>
using namespace std;

int find_set(int v,vector<int>& parent) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v],parent);
}

void union_sets(int a, int b,vector<int>& parent) {
    a = find_set(a,parent);
    b = find_set(b,parent);
    if (a != b)
        parent[b] = a;
}
int main(){
    int n;cin>>n;
    vector<pair<int,int>> work(n);
    for(int i=0;i<n;++i)cin>>work[i].second>>work[i].first;
    vector<int> par(n);
    for(int i=0;i<n;++i)par[i]=i;
    int q;cin>>q;
    int u,v;
    for(int i=0;i<q;++i){
        cin>>u>>v;
        --u,--v;
        union_sets(u,v,par);
    }
    unordered_map<int,pair<int,int>> d;
    for(int i=0;i<n;++i){
        int x=find_set(i,par);
        d[x].first+=work[i].first;
        d[x].second+=work[i].second;
    }
    work.clear();
    for(auto e:d)work.push_back(e.second);
    int b;cin>>b;
    vector<int> dp(b+1,0);
    for(int i=1;i<=work.size();++i){
        for(int j=b;j>0;--j){
            if(work[i-1].first <= j)
            dp[j]=max(dp[j],work[i-1].second+dp[j-work[i-1].first]);
        }
    }
    cout<<dp[b]<<endl;
}