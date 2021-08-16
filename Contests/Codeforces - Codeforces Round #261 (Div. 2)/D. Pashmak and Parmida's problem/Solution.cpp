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
#define max_n 1e6
vector<int> seg(2*max_n,0);
void modify(int pos,int val){
    --pos;
    // cout<<pos<<endl;
    pos+=max_n;
    for(;pos > 0;pos/=2)seg[pos]+=val;
}
void build(vector<int>& suf){
    for(int e:suf){
        modify(e,1);
    }
}
int query(int l,int r){
    --r;
    // cout<<l<<' '<<r<<endl;
    l+=max_n,r+=max_n;
    int q=0;
    for(;l<r;l/=2,r/=2){
        if(l&1)q+=seg[l++];
        if(r&1)q+=seg[--r];
    }
    return q;
}
void solve()
{
    int n;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i){
        cin>>data[i];
    }
    map<int,int> d;
    vector<int> pre(n);
    for(int i=0;i<n;++i){
        d[data[i]]++;
        pre[i]=d[data[i]];
    }
    d.clear();
    vector<int> suf(n);
    for(int i=n-1;i>=0;--i){
        d[data[i]]++;
        suf[i]=d[data[i]];
    }
    build(suf);
    ll ans = 0;
    // cout<<seg[max_n]<<' '<<seg[max_n+1]<<' '<<seg[max_n+2]<<' '<<seg[max_n+3]<<' '<<endl;
    // for(int e:seg)cout<<e<<endl;
    for(int i=0;i<n;++i){
        modify(suf[i],-1);
        int q=query(0,pre[i]);
        // cout<<seg[max_n]<<' '<<seg[max_n+1]<<' '<<seg[max_n+2]<<' '<<seg[max_n+3]<<' '<<endl;
        // cout<<q<<endl;
        ans+=(ll)q;
    }
    cout<<ans<<endl;
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
