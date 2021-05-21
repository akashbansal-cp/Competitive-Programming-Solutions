#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<string,pair<int,int>> data;
    string s;
    int t;
    for(int i=0;i<n;++i){
        cin>>s>>t;
        if(t==0){
            data[s].first++;
        }
        else if(t==1){
            data[s].second++;
        }
    }
    t=0;
    for(auto itr:data){
        t+=max(itr.second.first,itr.second.second);
    }
    cout<<t<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}