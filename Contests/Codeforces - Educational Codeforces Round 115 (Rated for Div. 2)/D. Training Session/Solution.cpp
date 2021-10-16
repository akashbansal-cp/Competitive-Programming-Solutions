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
    int n;cin>>n;
    vector<pair<int,int>> d(n);
    for(int i=0;i<n;++i)cin>>d[i].first>>d[i].second;
    map<int,int> diff,topi;
    for(int i=0;i<n;++i){
        topi[d[i].first]++;
        diff[d[i].second]++;
    }
    ll ans = 0;
    for(int i=0;i<n;++i){
        ll qwst=topi[d[i].first]-1;
        ll qwsd=diff[d[i].second]-1;
        ll qwsn=n-1-i-qwsd-qwst;
        ll ta=qwsn*(qwsd+qwst);
        qwsd*=(qwsd-1);
        qwst*=(qwst-1);
        qwsn*=(qwsn-1);
        qwst/=2,qwsd/=2,qwsn/=2;
        ta+=(qwst+qwsd+qwsn);
        ans+=ta;
        topi[d[i].first]--,diff[d[i].second]--;
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
