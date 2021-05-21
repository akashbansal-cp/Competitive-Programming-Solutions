#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll x,y;
    cin>>x>>y;
    ll ans=0;
    if(y>=x)y=x-1;
    // confirm ki y<x only
    ll p=sqrt(x+1);
    if(p>y)p=y;
    ll z=p*(p-1);
    z/=2;
    ans=z;
    // cout<<z<<' ';


    ll m=p+1;
    z=0;
    while(m<=y){
        ll i=x/(m+1);
        ll n=x/i;
        --n;
        // if(x%i==0)--n;
        if(n>y)n=y;
        // if(x==123456)cout<<m<<' '<<n<<endl;
        z+=(n-m+1)*i;
        m=n+1;
    }
    // cout<<z<<endl;
    ans+=z;
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
