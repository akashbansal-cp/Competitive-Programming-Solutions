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
    for(int i=0;i<n;++i){
        cin>>data[i];
        --data[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(n,0));
    if(data[0]==0)dp[0][0]=1;
    for(int i=1;i<n;++i){
        dp[0][i]=dp[0][i-1];
        if(data[i]==i)++dp[0][i];
        int p=i-data[i];
        for(int j=1;j<=n;++j){
            dp[j][i]=max(dp[j-1][i-1],(dp[j][i-1]+(p==j)));
        }
    }
    int m=n;
    bool found = false;
    for(int i=0;i<=n;++i){
        for(int j=0;j<n;++j){
            if(dp[i][j] >= k){
                m=min(m,i);
                found = true;
            }
        }
    }
    if(found)cout<<m<<endl;
    else cout<<-1<<endl;
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
