#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll power(ll x,ll n){
    if(n==0)return 1;
    if(n%2==0){
        n=power(x,n/2);
        n*=n;
        n%=MOD;
        return n;
    }
    else{
        n=power(x,n/2);
        n*=n;
        n%=MOD;
        n*=x;
        n%=MOD;
        return n;
    }
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    // (2^n - 1)^m
    n=power(2,n);
    --n;
    // cout<<n<<' '<<m<<' '; 
    n=power(n,m);
    cout<<n<<endl;
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
