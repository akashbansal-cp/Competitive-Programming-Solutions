#include<bits/stdc++.h>
using namespace  std;
int main(){
    int n;cin>>n;
    vector<int> inp(n);
    for(int i=0;i<n;++i)cin>>inp[i];
    if(n==1){
        cout<<inp[0]<<endl;
        return 0;
    }
    vector<int> out(n);
    out[0]=inp[0]*inp[1];
    out[n-1]=inp[n-1]*inp[n-2];
    for(int i=1;i<n-1;++i){
        out[i]=inp[i-1]*inp[i]*inp[i+1];
    }
    for(int e:out)cout<<e<<' ';
    cout<<endl;
}