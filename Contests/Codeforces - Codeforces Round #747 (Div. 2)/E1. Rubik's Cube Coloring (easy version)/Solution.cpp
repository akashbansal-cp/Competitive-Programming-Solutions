#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define mod 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll modpow(ll x,ll y){
    if(y==0)return 1;
    ll z;
    if(y%2==0){
        z=modpow(x,y/2);
        z%=mod;
        z*=z;
        z%=mod;
    }
    else{
        z=modpow(2,y/2);
        z%=mod;
        z*=z;
        z*=4;
        z%=mod;
    }
    return z;
}
int main()
{
    fio
    int n;cin>>n;
    // n=60;
    ll z=0;
    for(int i=0;i<n;++i){
        z+=pow(2,i);
    }
    --z;
    z=modpow(4,z);
    z*=6;
    z%=mod;
    cout<<z<<endl;
    return 0;
}
