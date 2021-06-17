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
    string s;
    cin>>s;
    int n=s.length(),x=0;
    vector<int> dp(n);
    dp[n-1]=1;
    if(s[n-1]=='?')s[n-1]='0',x=1;
    for(int i=n-2;i>=0;--i){
        if(s[i]=='?'){
            s[i]=s[i+1]=='0'?'1':'0';
            dp[i]=dp[i+1]+1;
            ++x;
            continue;
        }
        else if(s[i]=='0'){
            if(s[i+1]=='1'){
                dp[i]=dp[i+1]+1;
            }
            else{
                dp[i]=x+1;
            }
            x=0;
        }
        else if(s[i]=='1'){
            if(s[i+1]=='0'){
                dp[i]=dp[i+1]+1;
            }
            else{
                dp[i]=x+1;
            }
            x=0;
        }
    }
    ll ans=0;
    for(int i=0;i<n;++i){
        ans+=(ll)dp[i];
    }
    cout<<ans<<endl;
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
