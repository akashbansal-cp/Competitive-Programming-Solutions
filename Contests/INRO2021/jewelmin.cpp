#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long expo(long long m,long long n){
    if(m==0)
        return 0;
    if(n==0)
        return 1;
    long long y;  
    if (n % 2 == 0) {  
        y = expo(m, n/2);  
        y = (y * y) % mod;  
    }  
    else {  
        y = m % mod;  
        y = (y * expo(m, n-1) % mod) % mod;  
    }  
  
    return ((y + mod) % mod);  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        n/=2;
        n*=(n+1);
        cout<< expo(m,n) << endl;
    }
}