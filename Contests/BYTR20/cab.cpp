#include<bits/stdc++.h>
using namespace std;
vector<int> data;
void solve(){
    string ans = "";
    int n,k;
    cin>>n>>k;
initial :
    if(n > k || n*pow(2,25) < k){
        cout<<"-1"<<endl;
        return ;
    }
    // cout<<"p1"<<endl;
    if(n==0){
        cout<<ans<<endl;
        return ;
    }
    // cout<<"p2"<<endl;
    // max more than n and less than k
    for(int i=0;i<data.size();++i){
        if(k-n+1 >= data[i] && data[i]<=k){
            // cout<<i<<endl;
            ans+=('z'-i);
            k-=data[i],--n;
            goto initial;
        }
    }
}
int main(){
    for(int i=25;i>=0;--i)
        data.push_back(pow(2,i));
    int t;
    cin>>t;
    while(t--)
        solve();
}