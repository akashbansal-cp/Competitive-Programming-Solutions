#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll D,d,p,q;
    cin>>D>>d>>p>>q;
    ll a=D/d,b=D%d;
    ll ans=D*p;
    ans+=(q*b*a);
    a*=(a-1);
    a/=2;
    ans+=(a*d*q);
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
