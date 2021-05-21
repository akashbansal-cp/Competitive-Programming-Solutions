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
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    map<int,ll> p;
    for(int i=0;i<n;++i){
        p[data[i]-i-1]++;
    }
    ll ans=0;
    for(auto e:p){
        ll c=0;
        c=e.second*(e.second-1);
        c/=2;
        ans+=c;
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
