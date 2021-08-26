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
    vector<int> dp(n+1);
    int sum=1;
    dp[1]=1,dp[0]=0;
    vector<int> t(n+1,0);
    for(int i=2;i<=n;++i){
        t[i]+=1;
        if(i+i <= n)t[i+i]-=1;
    }
    int p=0;
    int z;
    for(int i=2;i<=n;++i){
        p+=t[i];
        p%=m;
        if(p<0)p+=m;
        dp[i]=sum+p;
        dp[i]%=m;
        sum+=dp[i];
        sum%=m;
        z=2;
        while(true){
            if(i*z <= n){
                t[i*z]+=dp[i];
                t[i*z]%=m;
            }
            else break;
            if(i*z+z <= n){
                t[i*z+z]-=dp[i];
                t[i*z+z]%=m;
            }
            ++z;
        }
    }
    cout<<dp[n]<<endl;
}
int main()
{
    fio
    solve();
    return 0;
}
