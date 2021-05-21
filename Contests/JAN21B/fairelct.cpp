#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> A(n);
    for(int i=0;i<n;++i)
        cin>>A[i];
    vector<int> B(m);
    for(int i=0;i<m;++i)
        cin>>B[i];
    sort(A.begin(),A.end());
    sort(B.rbegin(),B.rend());
    int a=0,b=0;
    for(int e:A)
        a+=e;
    for(int e:B)
        b+=e;
    if(a>b){
        cout<<0<<endl;
        return ;
    }
    int temp = 0;
    for(int i=0;i<n;++i){
        A[i]=temp+A[i];
        temp=A[i];
    }
    temp = 0;
    for(int i=0;i<m;++i){
        B[i]=temp+B[i];
        temp=B[i];
    }
    int x=min(m,n);
    for(int i=0;i<x;++i){
        if((B[i]-A[i])*2 > (b-a)){
            cout<<i+1<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}