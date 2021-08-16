#define ll long long
#define mod (ll)1e8+7
#include<bits/stdc++.h>
using namespace std;
vector<int> numBST(vector<int> nodeValues){
    vector<ll> dp(1002,0);
    dp[0]=1,dp[1]=1;
    for(int i=2;i<=1000;++i){
        for(int j=i-1;j>=0;--j){
            ll x=dp[j]*dp[i-1-j];
            x%=mod;
            dp[i]+=x;
            dp[i]%=mod;
        }
    }
    vector<int> ans;
    for(int i=0;i<nodeValues.size();++i){
        ans.push_back(dp[nodeValues[i]]);
    }
    return ans;
}
int main(){
    vector<int> p={1,2,3,100,1000};
    vector<int> q=numBST(p);
    for(int e:q)cout<<e<<endl;
    return 0;
}