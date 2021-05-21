#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll>> data(n);
    for(ll i=0;i<n;++i){
        cin>>data[i].first>>data[i].second;
    }
    vector<ll> dp(w+1,0);
    for(int i=1;i<=n;++i){
        for(int j=w;j>0;--j){
            if(data[i-1].first <= j)
            dp[j]=max(dp[j],data[i-1].second+dp[j-data[i-1].first]);
        }
    }
    cout<<dp[w];
    // vector<vector<ll>> dp(w+1,vector<ll> (n+1,0));
    // for(ll i=1;i<=w;++i){
    //     for(ll j=1;j<=n;++j){
    //         if(data[j-1].first <= i){
    //             dp[i][j]=max(dp[i][j-1],data[j-1].second + dp[i-data[j-1].first][j-1]);
    //         }
    //         else{
    //             dp[i][j]=dp[i][j-1];
    //         }
    //     }
    // }
    // cout<<dp[w][n]<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
