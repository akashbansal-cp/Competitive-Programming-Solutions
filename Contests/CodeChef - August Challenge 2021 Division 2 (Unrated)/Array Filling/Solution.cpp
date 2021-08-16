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
ll lcm(ll& x,ll y){
    ll g=__gcd(x,y);
    return (x*y)/g;
}
void solve()
{
    int n,m;cin>>n>>m;
    vector<pair<int,int>> data(m);
    for(int i=0;i<m;++i){
        cin>>data[i].first>>data[i].second;
    }
    sort(data.begin(),data.end());
    ll ans = 0;
    ll x=n/data[m-1].second;
    ans = data[m-1].first*(n-x);
    ll y = data[m-1].second;
    for(int i=m-2;i>=0;--i){
        if(y>n)break;
        ll x=n/y;
        y=lcm(y,(ll)data[i].second);
        x-=(n/y);
        ans+=(x*data[i].first);
    }
    cout<<ans<<endl;
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
