#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll mod_pow(ll n,ll k){
    if(k==0)return 1;
    ll z=mod_pow(n,k/2);
    z*=z;
    z%=(ll)(1000000007);
    if(k%2==1){
        z*=n;
        z%=(ll)MOD;
    }
    return z;
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    cout<<mod_pow(n,k)<<endl;
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
