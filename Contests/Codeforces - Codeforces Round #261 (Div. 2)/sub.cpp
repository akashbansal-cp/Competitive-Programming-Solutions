#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,h;cin>>n>>h;
    h*=20;
    vector<pair<int,int>> data(n);
    for(int i=0;i<n;++i)cin>>data[i].first>>data[i].second;
    vector<int> time(n-1);
    for(int i=0;i<n-1;++i){
        cin>>time[i];
    }
    for(int i=1;i<n-1;++i)time[i]+=time[i-1];
    int ans = 0;
    for(int i=0;i<n;++i){
        set<vector<int>> d;
        vector<int> a(n,0);
        for(int j=0;j<=i;++j){
            d.insert({data[j].first,data[j].second,j});
        }
        
    }
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}