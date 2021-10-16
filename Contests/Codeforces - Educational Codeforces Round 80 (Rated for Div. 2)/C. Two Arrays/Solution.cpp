#define MOD 1000000007
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;cin>>n>>m;
    m*=2;
    vector<vector<int>> dp(m+1,vector<int>(n+1));
    for(int i=0;i<=n;++i)dp[1][i]=i;
    for(int i=0;i<=m;++i)dp[i][1]=1;
    for(int i=2;i<=m;++i){
        for(int j=2;j<=n;++j){
            int a=0;
            for(int k=1;k<=i;++k){
                a+=dp[k][j-1];
                a%=MOD;
            }
            dp[i][j]=(a+1)%MOD;
        }
    }
    cout<<dp[m][n]<<endl;
}
int main()
{
    solve();
    return 0;
}
