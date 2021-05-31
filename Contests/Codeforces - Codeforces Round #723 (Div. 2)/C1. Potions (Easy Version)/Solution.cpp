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
    vector<ll> potion(n,0);
    for(int i=0;i<n;++i)cin>>potion[i];
    vector<vector<ll>> dp(n);
    dp[n-1]={0,potion[n-1]};
    for(int i=n-2;i>=0;--i){
        dp[i].resize(n-i+1);
        dp[i][0]=0;
        for(int j=1;j<n-i;++j){
            dp[i][j]=max(dp[i+1][j-1]+potion[i],dp[i+1][j]);
        }
        dp[i][n-i]=dp[i+1][n-i-1]+potion[i];
    }
    // for(auto e:dp){
    //     for(auto f:e)cout<<f<<' ';
    //     cout<<endl;
    // }
    for(int i=dp[0].size()-1;i>=0;--i){
        if(dp[0][i]>=0){
            cout<<i<<endl;
            return;
        }
    }
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
