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
    int x,y;cin>>x>>y;
    if(y <= x){
        cout<<x-y<<endl;
    }
    else{
        x=abs(y-x);
        if(x%2==1)x+=3;
        cout<<x/2<<endl;
    }
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
