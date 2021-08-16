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
    int n,m,k;
    cin>>n>>m>>k;
    if(n%2==1){
        k-=(m/2);
        if(k>=0 && k%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(n%2==0 && m%2==0){
        if(k%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        int x=(m-1)*n;
        x/=2;
        if(k%2==0  && k<=x)cout<<"YES\n";
        else cout<<"NO\n";
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
