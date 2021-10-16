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

vector<ll> primes;
void solve()
{
    ll n;cin>>n;
    if(n%2==0){
        cout<<2*n<<' '<<n<<endl;
        return;
    }
    for(int i=0;i<primes.size();++i){
        if(n%primes[i]!=0){
            cout<<n*(primes[i]+1)<<' '<<n*primes[i]<<endl;
            return;
        }
    }
}
int main()
{
    vector<bool> prime(52,true);
    prime[1]=true;
    for(int i=2;i<52;++i){
        if(prime[i])
            for(int j=2*i;j<52;j+=i)prime[j]=false;
    }
    for(int i=3;i<52;++i){
        if(prime[i])primes.push_back(i);
    }
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
