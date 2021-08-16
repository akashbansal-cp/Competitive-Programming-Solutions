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
    vector<vector<int>> b(n+1);
    for(int i=1;i<=n;++i){
        for(int j=2*i;j<=n;j+=i){
            b[j].push_back(i);
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=0;j<b[i].size();++j){
            int m=(n-b[i][j])/i;
            b[i][j]=m+1;
        }
    }

    ll ans = 0;
    for(auto e:b){
        for(auto f:e){
            ans += (ll)f;
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
