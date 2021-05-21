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
    ll n;
    cin>>n;
    vector<ll> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    sort(data.begin(),data.end());
    if(n==1){
        cout<<0<<endl;return;
    }
    vector<ll> pre_sum(n);
    pre_sum[0]=data[0];
    for(int i=1;i<n;++i)pre_sum[i]=pre_sum[i-1]+data[i];
    vector<ll> suf_sum(n);
    suf_sum[n-1]=data[n-1];
    for(int i=n-2;i>=0;--i)suf_sum[i]=suf_sum[i+1]+data[i];
    ll ans=min(suf_sum[1]-(n-1)*data[0],(n-1)*data[n-1] - pre_sum[n-2]);
    for(int i=1;i<n-1;++i){
        ll cur_ans;
        cur_ans=min((data[i]*i-pre_sum[i-1]) + (suf_sum[i+1]-(n-i-1)*data[0]),(data[n-1]*i-pre_sum[i-1]) + (suf_sum[i+1]-(n-i-1)*data[i]));
        ans=min(ans,cur_ans);
        cout<<cur_ans<<endl;
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
