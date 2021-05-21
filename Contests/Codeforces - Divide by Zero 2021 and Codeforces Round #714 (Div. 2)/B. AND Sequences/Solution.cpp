#define ll long long
#define MOD 1000000007
#include <bits/stdc++.h>
using namespace std;
ll  fact(int n){
    ll ans=1;
    for(int i=1;i<=n;++i){
        ans*=i;
        ans%=MOD;
    }
    return ans;
}
void solve()
{
    int n;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    sort(data.begin(),data.end());
    int x=data[0];
    for(int i=1;i<n;++i)x=(x&data[i]);
    if(x!=data[0] || data[0]!=data[1]){
        cout<<0<<endl;return;
    }
    int p=0;
    while(p<n && data[0]==data[p])++p;
    ll ans=(ll)p*(p-1);
    ans%=MOD;
    ll fac=fact(n-2);
    ans*=fac;
    ans%=MOD;
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
