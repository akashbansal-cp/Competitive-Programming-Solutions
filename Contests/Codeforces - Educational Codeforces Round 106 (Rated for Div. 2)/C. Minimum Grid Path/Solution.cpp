#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,temp;
    cin>>n;
    vector<int> x;
    vector<int> y;
    for(int i=0;i<n;++i){
        cin>>temp;
        if(i%2) x.push_back(temp);
        else y.push_back(temp);
    }
    vector<ll> dp1(x.size());
    vector<ll> dp2(y.size());
    dp1[0]=(ll)n*x[0];
    int mn=0;
    for(int i=1;i<x.size();++i){
        if(x[i]<x[mn]){
            dp1[i]=dp1[i-1]+(ll)(n-i)*(ll)(x[i]-x[mn]);
            mn=i;
        }
        else{
            dp1[i]=dp1[i-1]+x[i]-x[mn];
        }
    }
    dp2[0]=(ll)n*y[0],mn=0;
    for(int i=1;i<y.size();++i){
        if(y[i]<y[mn]){
            dp2[i]=dp2[i-1]+(ll)(n-i)*(ll)(y[i]-y[mn]);
            mn=i;
        }
        else{
            dp2[i]=dp2[i-1]+y[i]-y[mn];
        }
    }
    ll ans=LLONG_MAX;
    for(int i=0;i<y.size();++i){
        if(i-1 >= 0){
            ans=min(ans,dp2[i]+dp1[i-1]);
        }
        if(i<x.size())ans=min(ans,dp2[i]+dp1[i]);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
