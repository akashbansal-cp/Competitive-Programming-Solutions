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
    int n;cin>>n;
    string path;
    cin>>path;
    vector<ll> pre(n,0);
    vector<ll> suf(n,0);
    vector<ll> pre_cost(n,0);
    vector<ll> suf_cost(n,0);
    ll x=0,y=0;
    for(int i=0;i<n;++i){
        if(path[i]=='*'){
            pre_cost[i]=y;
            ++x;
            pre[i]=x;
        }
        else{
            pre[i]=x;
            y+=x;
            pre_cost[i]=y;
        }
    }
    x=0,y=0;
    for(int i=n-1;i>=0;--i){
        if(path[i]=='*'){
            suf_cost[i]=y;
            ++x;
            suf[i]=x;
        }
        else{
            suf[i]=x;
            y+=x;
            suf_cost[i]=y;
        }
    }
    ll ans=LLONG_MAX;
    for(int i=0;i<n;++i){
        ll cur_ans=0;
        if(i-1 >= 0)cur_ans+=pre_cost[i-1];
        if(i+1 < n)cur_ans+=suf_cost[i+1];
        if(path[i]!='*'){
            ll aa=0,ab=0;
            if(i-1 >= 0)aa=pre[i-1];
            if(i+1 < n)ab=suf[i+1];
            cur_ans+=min(aa,ab);
        }
        ans=min(ans,cur_ans);
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
