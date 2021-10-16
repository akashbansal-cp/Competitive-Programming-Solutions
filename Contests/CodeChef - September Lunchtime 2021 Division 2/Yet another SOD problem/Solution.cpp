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
void solve()
{
    ll a,b;cin>>a>>b;
    while(a%3!=0)++a;
    while(b%3!=0)--b;

    ll n=(b-a)/3;
    if(a>b){
        cout<<0<<endl;
        return;
    }
    ++n;
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
