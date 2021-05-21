#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<pair<int,int>> dp(n);
    int p=0,q=0;
    for(int i=0;i<n;++i){
        if(a[i]=='0')++p;
        else ++q;
        dp[i].first=p,dp[i].second=q;
    }
    vector<bool> cond(n);
    for(int i=0;i<n;++i){
        if(a[i]==b[i])cond[i]=true;
        else cond[i]=false;
    }
    bool c=false;
    for(int i=n-1;i>=0;--i){
        if(c==true){
            a[i] = a[i]=='0' ? '1' : '0';
        }
        if(a[i]==b[i]){
            continue;
        }
        else{
            if(dp[i].first!=dp[i].second){
                cout<<"NO"<<endl;return;
            }
            c=!c;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
