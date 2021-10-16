#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int> d(n);
    for(int i=0;i<n;++i)cin>>d[i];
    vector<int> rem(k,0);
    int s=0;
    for(int i=0;i<n;++i){
        s+=d[i];
        s%=k;
        rem[s]++;
    }
    ll ans=0;
    for(int i=0;i<k;++i){
        ll p=rem[i];
        p*=(p-1);
        p/=2;
        ans+=p;
    }
    cout<<ans+rem[0]<<endl;
}