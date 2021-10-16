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
    int a,b,c,m;cin>>a>>b>>c>>m;
    int mx=max(a,max(b,c));
    int m1=a+b+c-3;
    int m2;
    if(a==mx)swap(a,c);
    else if(b==mx)swap(b,c);
    if(a > b)swap(a,b);
    m2=c-a-b;
    if(m2>0)m2--;
    if(m >= m2 && m<=m1)cout<<"YES\n";
    else cout<<"NO\n";
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
