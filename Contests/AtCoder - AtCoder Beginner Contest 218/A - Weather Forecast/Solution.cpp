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
    int n;cin>>n;
    string s ;cin>>s;
    if(s[n-1]=='o')cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
