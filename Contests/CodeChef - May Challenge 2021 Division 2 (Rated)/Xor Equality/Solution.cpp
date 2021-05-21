#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll power(ll x,ll y){
    if(y==0)return 1;
    if(y==1)return x;
    if(y%2==0){
        x = power(x,y/2)%MOD;
        x*=x;
        x%MOD;
        return x;
    }
    else{
        y=power(x,y/2)%MOD;
        y*=y;
        y%=MOD;
        y*=x;
        y%=MOD;
        return y;
    }
    return 1;
}
void solve()
{
    ll n;cin>>n;
    ll x=0,y=0;
    if(n>1)x=power(2,n-2);
    else x=1;
    if(n>2)y=power(2,n-3);
    else if(n==2)y=1;
    else y=0;
    cout<<x+y<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
