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
    int n,k;cin>>n>>k;
    vector<int> data(n);
    ++k;
    for(int i=0;i<n;++i)cin>>data[i];
    vector<vector<int>> dp(n,vector<int>(k));
    for(int i=0;i<k;++i)dp[0][i]=1;
    vector<int> last(n);
    map<int,int> d;
    for(int i=0;i<n;++i){
        if(d[data[i]]==0)last[i]=-1;
        else last[i]=d[data[i]]-1;
        d[data[i]]=i+1;
    }
    for(int i=1;i<n;++i){
        if(data[i]==data[i-1])dp[i][0]=dp[i-1][0]+1;
        else dp[i][0]=1;
        if(last[i]!=-1)dp[i][0]=max(dp[i][0],dp[last[i]][0]+1);
        for(int j=1;j<k;++j){
            if(data[i]==data[i-1])dp[i][j]=dp[i-1][j]+1;
            else{
                dp[i][j]=dp[i-1][j-1]+1;
                if(last[i]!=-1){
                    dp[i][j]=max(dp[i][j],dp[last[i]][j]+1);
                }
            }
        }
    }
    int p=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<k;++j){
            // cout<<dp[i][j]<<' ';
            p=max(p,dp[i][j]);
        }
        // cout<<endl;
    }
    cout<<p<<endl;
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

// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #define precise(p) cout<<setprecision(p);
// #define MOD 1000000007
// #define ll long long
// #define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n,k;cin>>n>>k;
//     vector<int> data(n);
//     ++k;
//     for(int i=0;i<n;++i)cin>>data[i];
//     // 0 for not includeing(strinctly) and 1 for including(strictly)
//     vector<vector<vector<int>>> dp(n,vector<vector<int>>(k,vector<int> (2)));
//     vector<int> last(n);
//     map<int,int> d;
//     for(int i=0;i<n;++i){
//         last[i]=d[data[i]]-1;
//         d[data[i]]=i+1;
//     }
//     for(int i=0;i<k;++i)dp[0][i][0]=0;
//     for(int i=0;i<k;++i)dp[0][i][1]=1;
//     for(int i=1;i<n;++i){
//         //  0
//         dp[i][0][0]=max(dp[i-1][0][0],dp[i-1][0][1]);
//         // 1
//         if(last[i]==-1){
//             dp[i][0][1]=1;
//         }
//         else{
//             dp[i][0][1]=dp[last[i]][0][1]+1;
//         }
//         for(int j=1;j<k;++j){
//             // 0
//             dp[i][j][0]=max(dp[i][j-1][0],max(dp[i-1][j][0],dp[i-1][j][1]));
//             // 1
//             dp[i][j][1]=max(dp[i][j-1][1],max(dp[i-1][j-1][1]+1,dp[i-1][j-1][0]+1));
//             if(last[i]!=-1){
//                 dp[i][j][1]=max(dp[i][j][1],dp[last[i]][j][1]+1);
//             }
//         }
//     }
//     int p=1;
//     for(int i=0;i<n;++i){
//         for(int j=0;j<k;++j){
//             for(int l=0;l<2;++l)
//                 p=max(p,dp[i][j][l]);
//         }
//     }
//     cout<<p<<endl;
// }
// int main()
// {
//     fio
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }
