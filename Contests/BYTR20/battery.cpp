#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    vector<int> mx(n/2);
    vector<int> mn(n/2);
    for(int i=0;i<n/2;++i){
        mx[i]=max(data[i],data[n-1-i]);
        mn[i]=min(data[i],data[n-1-i]);
    }
    int a=0;
    for(int i=0;i<mx.size();++i){
        auto itr=lower_bound(mn.begin()+i,mn.end(),mx[i]);
        if(itr!=mn.end()){
            int x=itr-mn.begin();
            a+=mn[x];
            mn[x] = -1;
        }
        else{
            a+=mx[i];
        }
    }
    if(n%2!=0){
        a+=data[n/2];
    }
    if(a>=x){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}