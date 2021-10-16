#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 998244353
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
vector<ll> fact(200001,0);
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
void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end());
    if(a[n-1]-a[n-2] > 1){
        cout<<0<<endl;
        return;
    }
    if(a[n-1]==a[n-2]){
        cout<<fact[n]<<endl;
        return;
    }
    int m=0;
    for(int i=n-2;i>=0;--i){
        if(a[i]==a[n-2])++m;
    }
    ll c=0;
    for(int i=m;i<n;++i){
        ll npr=modInverse(fact[i-m],MOD);
        npr*=fact[i];
        npr%=MOD;
        // cout<<npr<<' ';
        c+=npr;
        c%=MOD;
        if(c<0)c+=MOD;
    }
    c*=fact[n-m-1];
    c%=MOD;
    // cout<<endl;
    // cout<<c<<endl;
    c=fact[n]-c;
    if(c<0)c+=MOD;
    cout<<c<<endl;
}
int main()
{
    fact[0]=1;
    for(int i=1;i<200001;++i){
        fact[i]=(fact[i-1]*i)%MOD;
    }
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
