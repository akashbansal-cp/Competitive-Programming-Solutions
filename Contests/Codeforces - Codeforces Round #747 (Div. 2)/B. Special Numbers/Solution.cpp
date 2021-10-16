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
ll modpow(ll n,ll i){
    if(i==0)return 1;
    ll x;
    if(i%2==0){
        x=modpow(n,i/2);
        x%=mod;
        x*=x;
        x%=mod;
    }
    else{
        x = modpow(n,i/2);
        x%=mod;
        x*=x;
        x%=mod;
        x*=n;
        x%=mod;
    }
    return x;
}
void solve()
{
    ll ans = 0;
    ll n,k;cin>>n>>k;
    for(int i=30;i>=0;--i){
        if(pow(2,i) <= k){
            k-=pow(2,i);
            ans+=modpow(n,i);
            ans%=mod;
        }
    }
    cout<<ans<<endl;
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
