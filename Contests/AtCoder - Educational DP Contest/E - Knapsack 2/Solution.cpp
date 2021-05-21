#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,w;
    cin>>n>>w;
    vector<pair<ll,ll>> data(n);
    ll max_value=0;
    for(int i=0;i<n;++i){
        cin>>data[i].first>>data[i].second;
        max_value+=data[i].second;
    }
    ll ans=0;
    vector<vector<ll>> dp(max_value+1,vector<ll> (n+1,-1));
    for(ll i=0;i<=max_value;++i){
        for(ll j=0;j<=n;++j){
            if(i==0){
                dp[i][j]=0;
                continue;
            }
            if(j==0){
                dp[i][j]=-1;
                continue;
            }
            if(data[j-1].second <= i){
                dp[i][j]=dp[i][j-1];
                if(dp[i][j-1]==-1 && data[j-1].second == i){
                    dp[i][j]=data[j-1].first;
                }
                else{
                    if(dp[i-data[j-1].second][j-1]!=-1)
                        dp[i][j]=data[j-1].first + dp[i-data[j-1].second][j-1];
                    if(dp[i][j-1]!=-1 && dp[i][j]!=-1)
                        dp[i][j]=min(dp[i][j],dp[i][j-1]);
                }
            }
            else{
                dp[i][j]=dp[i][j-1];
            }
            // cout<<dp[i][j]<<' ';
            if(dp[i][j]!=-1 && dp[i][j] <= w){
                ans=max(ans,i);
            }
        }
        // cout<<endl;
    }
    cout<<ans;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
