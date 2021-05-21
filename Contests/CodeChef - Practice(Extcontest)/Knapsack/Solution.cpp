#include <bits/stdc++.h>
using namespace std;
void dpsol(){
    int max_weigth,n;
    cin>>n>>max_weigth;
    vector<pair<int,int>> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i].second;
    for(int i=0;i<n;++i)
        cin>>data[i].first;
    sort(data.begin(),data.end());
    vector<vector<int>> dp(max_weigth+1,vector<int>(n+1,0));
    for(int i=1;i<=max_weigth;++i){
        for(int j=1;j<=n;++j){
            if(data[j-1].first <= i){
                dp[i][j]=max(dp[i][j-1],data[j-1].second+dp[i-data[j-1].first][j-1]);
            }
            else{
                dp[i][j]=dp[i][j-1];
            }
        }
    }
    cout<<dp[max_weigth][n];
}
int main()
{
    dpsol();
    return 0;
}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//    int n,w;
//    cin>>n>>w;
//    int wt[n+1],v[n+1];
//    for (int i = 1; i <=n; i++)  cin>>v[i];
//    for (int i = 1; i <=n; i++)  cin>>wt[i];

//    int dp[n+1][w+1];
//    for (int i = 0; i < n+1; i++)
//    {
//      for(int j =0; j < w+1; j++)
//      {
//        if(i == 0 || j == 0) dp[i][j] = 0;
//      }
//    }
   
//     for (int i = 1; i <= n; i++)
//      {
//      for(int j = 1; j <= w; j++)
//        {
//           if(wt[i] <= j) 
//                dp[i][j] = max (v[i]+dp[i-1][j-wt[i]],dp[i-1][j]);

//           else 
//                dp[i][j]=dp[i-1][j];
//        }
//      }
   
//     cout<<dp[n][w];
   
//   return 0;
// }