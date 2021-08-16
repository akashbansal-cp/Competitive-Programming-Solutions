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
void build(vector<ll>& seg,int n){
    for(int i=n-1;i>0;--i)seg[i]=__gcd(seg[i<<1],seg[i<<1|1]);
}
ll query(vector<ll>& seg,int l,int r,int n){
    ll res = seg[l+n];
    for(l+=n,r+=n;l<r;l>>=1,r>>=1){
        // cout<<res<<' '<<r<<' ';
        if(l&1)res=__gcd(seg[l++],res);
        if(r&1)res=__gcd(seg[--r],res);
        // cout<<res<<endl;
    }
    return res;
}
void solve()
{
    int n;cin>>n;
    vector<ll> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int p = n-1;
    vector<ll> seg(2*p);
    for(int i=0;i<n-1;++i){
        seg[p+i]=abs(data[i+1]-data[i]);
    }
    build(seg,p);
    // for(int e:seg)cout<<e<<' ';cout<<endl;
    int ans=0,l=0;
    for(int r=0;r<p;++r){
    rest:
        if(l>r)continue;
        ll g=query(seg,l,r+1,p);
        // cout<<l<<' '<<r<<' '<<g<<endl;
        if(g>1){
            ans = max(ans,r-l+1);
        }
        else{
            ++l;
            goto rest;
        }
    }
    cout<<ans+1<<endl;
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
