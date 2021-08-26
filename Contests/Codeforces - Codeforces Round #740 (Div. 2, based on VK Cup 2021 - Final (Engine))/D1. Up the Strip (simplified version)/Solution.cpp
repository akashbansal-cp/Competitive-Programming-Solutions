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
    int n,m;cin>>n>>m;
    vector<ll> dp(n+1);
    vector<ll> sum(n+1);
    sum[0]=0,sum[1]=1;
    dp[1]=1,dp[0]=0;
    for(int i=2;i<=n;++i){
        dp[i]=sum[i-1];
        for(int a=2;a<=i;){
            int x=i/a;
            x=i/x;
            dp[i]+=(ll)dp[i/a]*(x-a+1);
            dp[i]%=m;
            a=x+1;
        }
        sum[i]=sum[i-1]+dp[i];
        sum[i]%=m;
    }
    // for(int e:dp)cout<<e<<' ';cout<<endl;
    // for(int e:sum)cout<<e<<' ';cout<<endl;
    cout<<dp[n]<<endl;
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
