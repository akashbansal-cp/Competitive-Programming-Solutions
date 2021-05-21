#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> response(n);
    for(int i=0;i<n;++i)cin>>response[i];
    // ll ans=0;
    vector<int> res(n);
    for(int i=0;i<n;++i){
        int p=0;
        for(int j=0;j<m;++j){
            if(response[i][j]=='1')++p;
        }
        res[i]=p;
    }
    ll ans=0;
    int even=0,odd=0;
    for(int i=n-1;i>=0;--i){
        if(res[i]%2==0){
            ans+=odd;
        }
        else{
            ans+=even;
        }
        if(res[i]%2==0)++even;
        else ++odd;
    }
    // for(int e:res)cout<<e<<' ';cout<<endl;
    // for(int i=0;i<n;++i){
    //     for(int j=i+1;j<n;++j){
    //         int p=0;
    //         for(int k=0;k<m;++k){
    //             if(response[i][k]!=response[j][k]){
    //                 ++p;
    //             }
    //         }
    //         if(p%2==1)++ans;
    //     }
    // }
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
