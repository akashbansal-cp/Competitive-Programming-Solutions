#define ll long long
#define MOD 1000000007
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<1<<endl;return;
    }
    if(n==1){
        cout<<2<<endl;return;
    }
    vector<vector<int>> dp(k,vector<int> (n));
    for(int i=0;i<n;++i)dp[0][i]=1;
    bool flag = true;
    for(int i=1;i<k;++i){
        if(flag){
            int sum=0;
            for(int j=n-1;j>=0;--j){
                dp[i][j]=sum;
                sum+=dp[i-1][j];
                sum%=MOD;
            }
            flag = false;
        }
        else{
            int sum=0;
            for(int j=0;j<n;++j){
                dp[i][j]=sum;
                sum+=dp[i-1][j];
                sum%=MOD;
            }
            flag = true;
        }
    }
    // for(vector<int> e:dp){
    //     for(int f:e)cout<<f<<' ';cout<<endl;
    // }
    int ans=0;
    for(int i=0;i<k-1;++i){
        for(int j=0;j<n;++j){
            ans+=dp[i][j];
            ans%=MOD;
        }
    }

    cout<<ans+1<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
