#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n,m,x;
    cin>>n>>m>>x;
    ll a=x%n;
    ll b=x/n;
    if(a==0){
        a=n;
    }
    else ++b;
    --a;
    ll ans=a*m;
    ans+=b;
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
