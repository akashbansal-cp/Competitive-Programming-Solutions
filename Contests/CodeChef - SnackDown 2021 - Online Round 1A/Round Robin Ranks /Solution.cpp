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
    int n,k;cin>>n>>k;
    int c=(n-k)*2;
    k=(k-1)/2;
    c+=2*k;
    cout<<c<<endl;
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
