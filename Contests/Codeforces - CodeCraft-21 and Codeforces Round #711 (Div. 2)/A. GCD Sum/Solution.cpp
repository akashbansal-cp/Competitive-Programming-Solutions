
#define ll long long
#include <bits/stdc++.h>
using namespace std;
ll findsum(ll x){
    ll s=0;
    while(x!=0){
        s+=(x%10);
        x/=10;
    }
    return s;
}
void solve()
{
    ll x;
    cin>>x;
    while(__gcd(x,findsum(x))==1)++x;
    cout<<x<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
