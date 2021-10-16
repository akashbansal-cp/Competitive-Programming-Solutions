#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;
 
    if (m == 1)
        return 0;
 
    while (a > 1) {
        // q is quotient
        ll q = a / m;
        ll t = m;
 
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
        t = y;
 
        // Update y and x
        y = x - q * y;
        x = t;
    }
 
    // Make x positive
    if (x < 0)
        x += m0;
 
    return x;
}
int main()
{
    fio
    int t;
    vector<ll> d(200001);
    d[1]=1;
    for(int i=2;i<100001;++i){
        d[i]=d[i-1]*i;
        d[i]%=MOD;
    }
    cin >> t;
    while (t--){
        int n;cin>>n;
        ll p=modInverse(d[n+1],MOD);
        p=d[n*2]*p;
        p%=MOD;
        cout<<p<<endl;
    }
    return 0;
}
