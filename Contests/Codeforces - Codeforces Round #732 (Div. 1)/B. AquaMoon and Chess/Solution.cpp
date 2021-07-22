#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 998244353 
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
vector<ll> fact(200001);
ll power(ll x,ll y){
    if (y == 0)
        return 1;
    ll p = power(x, y / 2) % MOD;
    p = (p * p) % MOD;
 
    return (y % 2 == 0) ? p : (x * p) % MOD;
}
int ncr(int n,int r){
    ll n_f=fact[n];
    ll r_f=fact[r];
    ll nr_f=fact[n-r];
    nr_f*=r_f;
    nr_f%=MOD;
    nr_f=power(nr_f,MOD-2);
    n_f*=nr_f;
    n_f%=MOD;
    return (int)n_f;
}
void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;
    int p=0,q=0;
    for(int i=0;i<n;++i){
        if(s[i]=='0')++q;
        else if(s[i]=='1'){
            if(i+1 < n && s[i+1]=='1'){
                ++i;
                ++p;
            }
        }
    }
    p+=q;
    // cout<<p<<' '<<q<<endl;
    cout<<ncr(p,q)<<endl;
}
int main()
{
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<200001;++i)fact[i]=(fact[i-1]*i)%MOD;
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
