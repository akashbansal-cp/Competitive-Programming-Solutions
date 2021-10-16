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
    int n,h;cin>>n>>h;
    vector<int> p(n);
    for(int i=0;i<n;++i)cin>>p[i];
    sort(p.begin(),p.end(),greater<int>());
    int x=p[0],y=p[1];
    int z=h/(x+y);
    z*=2;
    h%=(x+y);
    if(h > x)z+=2;
    else if(h==0);
    else z+=1;
    cout<<z<<endl;
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
