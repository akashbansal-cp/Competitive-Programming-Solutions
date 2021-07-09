#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll a,b;cin>>a>>b;
    while(b%2==0)b/=2;
    if(b==1)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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
