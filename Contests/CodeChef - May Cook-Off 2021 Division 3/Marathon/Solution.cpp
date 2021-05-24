#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int D,d,a,b,c;
    cin>>D>>d>>a>>b>>c;
    D*=d;
    if(D<10)cout<<0;
    else if(D<21)cout<<a;
    else if(D<42)cout<<b;
    else cout<<c;
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
