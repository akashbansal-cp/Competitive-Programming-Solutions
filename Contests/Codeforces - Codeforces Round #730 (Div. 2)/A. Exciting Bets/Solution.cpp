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
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0 0\n";
        return;
    }
    ll ans=abs(a-b);
    ll rem = a%ans;

    cout<<abs(a-b)<<' '<<min(rem,ans-rem)<<endl;
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
