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
    int n,q;cin>>n>>q;
    vector<int> a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    vector<pair<ll,ll>> d(2*n);
    ll x=0;
    for(int i=0;i<n;++i){
        x+=(b[i]-a[i]);
        d[i+n].first=d[i+n].second=x;
    }
    for(int i=n-1;i>0;--i){
        d[i].first=min(d[i*2].first,d[i*2+1].first);
        d[i].second=max(d[i*2].second,d[i*2+1].second);
    }
    int l,r;
    for(int i=0;i<q;++i){
        cin>>l>>r;
        if(d[l+n-1].first!=d[r+n-1].first+b[l-1]-a[l-1]){
            cout<<-1<<endl;
            continue;
        }
        ll p=d[r+n-1].first;
        --l;
        ll mn=LLONG_MAX,mx=LLONG_MIN;
        for(l+=n,r+=n;l<r;l>>=1,r>>=1){
            if(l&1){
                mn=min(mn,d[l].first);
                mx=max(mx,d[l].second);
                ++l;
            }
            if(r&1){
                --r;
                mn=min(mn,d[r].first);
                mx=max(mx,d[r].second);
            }
        }
        if(mn >= p){
            cout<<mx-p<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
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
