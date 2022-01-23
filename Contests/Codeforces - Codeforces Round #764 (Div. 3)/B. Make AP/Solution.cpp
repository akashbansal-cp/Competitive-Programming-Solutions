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
    int x=a+c;
    if(x%(2*b)==0)cout<<"YES\n";
    else{
        if((2*b-c)%a==0 && 2*b-c>0)cout<<"YES\n";
        else if((2*b-a)%c==0 && 2*b-a>0)cout<<"YES\n";
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
