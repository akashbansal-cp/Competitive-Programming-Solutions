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
    vector<ll> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    sort(data.begin(),data.end());
    ll ans=data[n-1];
    for(int i=0;i<n-1;++i){
        ans+=(data[i]-data[i+1])*(i+1)*(n-i-1);
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
