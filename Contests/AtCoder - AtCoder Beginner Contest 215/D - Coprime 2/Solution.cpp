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
    int n,m;
    cin>>n>>m;
    vector<ll> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    ll l=data[0];
    for(int i=1;i<n;++i){
        ll p=__gcd(l,data[i]);
        l=(l*data[i])/p;
    }
    vector<ll> ans;
    for(int i=1;i<=m;++i){
        if(__gcd((ll)i,l)==1)ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(ll e:ans)cout<<e<<' ';
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
