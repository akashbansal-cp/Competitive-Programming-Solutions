#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<int,vector<pair<int,int>>> data;
    int l,r,v;
    for(int i=0;i<n;++i){
        cin>>l>>r>>v;
        data[v].push_back(make_pair(l,r));
    }
    for(auto& e:data){
        for(auto& f:e.second)
            sort(e.second.begin(),e.second.end());
    }
    for(auto e:data){
        int x=e.second[0].first,y=e.second[0].second;
        for(int i=1;i<e.second.size();++i){
            pair<int,int> f=e.second[i];
            if(f.first < x){
                cout<<"No"<<endl;
                return ;
            }
            else if(x<=f.first && y>=f.second){
                x=y+1;
                y=max(f.second,x);
            }
            else if(y<f.second){
                y=f.second;
            }
        }
    }
    cout<<"Yes"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}