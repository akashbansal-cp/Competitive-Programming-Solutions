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
    ll n,k,temp;
    cin>>n>>k;
    map<int,int> data;
    for(ll i=0;i<n;++i){
        cin>>temp;
        data[temp%k]++;
    }
    ll ans=0;
    for(auto e:data){
        if(e.first==0)continue;
        ll m=(e.second*k)-e.first+1;
        ans=max(ans,m);
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
