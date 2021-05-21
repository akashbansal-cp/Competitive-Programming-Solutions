#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,temp;
    cin>>n;
    vector<int> rem(3,0);
    for(int i=0;i<n;++i){
        cin>>temp;
        rem[temp%3]++;
    }
    n/=3;
    int ans=0;
    // cout<<rem[0]<<rem[1]<<rem[2]<<endl;
    if(rem[2]>n){
        int x=rem[2]-n;
        rem[0]+=x;
        ans+=x;
    }
    else{
        int x=n-rem[2];
        rem[1]-=x;
        ans+=x;
    }
    if(rem[0]>rem[1]){
        ans+=(n-rem[1]);
    }
    else if(rem[1]>rem[0]){
        ans=ans+(n-rem[0])*2;
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
