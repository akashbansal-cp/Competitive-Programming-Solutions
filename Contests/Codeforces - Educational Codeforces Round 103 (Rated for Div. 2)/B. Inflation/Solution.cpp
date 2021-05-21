#define ll long long
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll> data(n);
    ll sum=0;
    for(ll i=0;i<n;++i){
        cin>>data[i];
        sum+=data[i];
    }
    for(ll i=n-1;i>0;--i){
        sum-=data[i];
        data[i]*=100;
        double ratio = (double)data[i]/(double)sum;
        if(ratio > k){
            double f=(double)data[i]/(double)k;
            sum=ceil(f);
            // cout<<f<<endl;
        }
    }
    cout<<sum-data[0]<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}