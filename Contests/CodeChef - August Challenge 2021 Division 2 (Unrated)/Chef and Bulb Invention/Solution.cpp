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
    int n,k,p;
    cin>>n>>p>>k;
    int x=(n-1)%k,y=p%k,z=ceil((double)n/k);
    if(y<=x){
        int ans = y*z;
        int m = (p-y)/k;
        ++m;
        cout<<ans+m<<endl;
    }
    else{
        int ans = (x+1)*z;
        ans += (y-x-1)*(z-1);
        int m=(p-y)/k;
        ++m;
        cout<<ans+m<<endl;
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
