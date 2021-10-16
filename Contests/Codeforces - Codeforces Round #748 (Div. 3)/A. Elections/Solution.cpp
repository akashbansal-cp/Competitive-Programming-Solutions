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
    int a,b,c;cin>>a>>b>>c;
    if(a <= max(b,c)){
        cout<<max(b,c)+1-a<<' ';
    }
    else cout<<0<<' ';
    if(b <= max(a,c)){
        cout<<max(a,c)+1-b<<' ';
    }
    else cout<<0<<' ';
    if(c <= max(b,a)){
        cout<<max(b,a)+1-c<<' ';
    }
    else cout<<0<<' ';
    cout<<endl;
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
