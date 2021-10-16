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
vector<int> x(310000,0);
void solve()
{
    int a,b;cin>>a>>b;
    int _xor=x[a-1];
    int p=b^_xor;
    if(p==0);
    else if(p == a)a+=2;
    else ++a;
    cout<<a<<endl;
}
int main()
{
    fio
    int t;
    for(int i=1;i<310000;++i)x[i]=(x[i-1]^i);
    cin >> t;
    while (t--)
        solve();
    return 0;
}
