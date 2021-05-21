#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s,t;
    cin>>s>>t;
    vector<vector<int>> dp(s.length()+1,vector<int> (t.length()+1,0));
    for(int i=1;i<=s.length();++i){
        for(int j=1;j<=t.length();++j){
            if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string ans="";
    int i=s.length(),j=t.length();
    while(i!=0 && j!=0){
        if(s[i-1] == t[j-1]){
            ans=s[i-1]+ans;
            --i,--j;
        }
        else if(dp[i][j-1] > dp[i-1][j])
            --j;
        else    
            --i;
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
