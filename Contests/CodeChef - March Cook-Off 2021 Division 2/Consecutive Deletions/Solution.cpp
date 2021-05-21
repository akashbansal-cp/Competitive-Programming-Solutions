#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int final[2]={0,0};
    for(int i=0;i<n;++i){
        if(data[i]==0)++final[0];
        else ++final[1];
    }
    int curr[2]={0,0};
    for(int i=0;i<k;++i){
        if(data[i]==0)++curr[0];
        else ++curr[1];
    }
    ll ans=0;
    ans+=((ll)curr[1]*(curr[1]+1));
    ans/=2;
    ans+=(final[1]-curr[1]);
    for(int i=k;i<n;++i){
        ll cur_ans=0;
        if(data[i-k]==1)--curr[1];
        else --curr[0];
        if(data[i]==1)++curr[1];
        else --curr[0];
        cur_ans=((ll)curr[1]*(curr[1]+1));
        cur_ans/=2;
        cur_ans+=(final[1]-curr[1]);
        ans=min(ans,cur_ans);
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
