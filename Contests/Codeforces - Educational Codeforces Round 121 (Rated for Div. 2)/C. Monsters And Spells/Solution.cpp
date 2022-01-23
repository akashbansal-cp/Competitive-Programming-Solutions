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
    vector<int> k(n),h(n);
    for(int i=0;i<n;++i)cin>>k[i];
    for(int i=0;i<n;++i)cin>>h[i];
    vector<pair<int,int>> sp(n);
    for(int i=0;i<n;++i)sp[i]={k[i]-h[i]+1,k[i]};
    vector<pair<int,int>> d;
    int s=0,e=0;
    sort(sp.begin(),sp.end());
    for(int i=0;i<n;++i){
        if(sp[i].first > e){
            d.push_back({s,e});
            s=sp[i].first,e=sp[i].second;
        }
        else{
            e=max(sp[i].second,e);
        }
    }
    d.push_back({s,e});
    ll ans = 0;
    for(int i=1;i<d.size();++i){
        ll  _n=d[i].second-d[i].first+1;
        _n*=(_n+1);
        _n/=2;
        ans+=_n;
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
