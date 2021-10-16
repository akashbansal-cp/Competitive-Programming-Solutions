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
    int n,k;cin>>n>>k;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int p=0;
    for(int i=0;i<n;++i)p=max(p,data[i]);
    ll ans = 0;
    for(int i=k-1;i<n;++i){
        if(data[i]==p){
            ans+=(ll)(n-i);
        }
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
