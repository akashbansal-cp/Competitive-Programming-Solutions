#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>> edges(n,vector<int>());
    int u,v;
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        edges[u-1].push_back(v-1);
        edges[v-1].push_back(u-1);
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
