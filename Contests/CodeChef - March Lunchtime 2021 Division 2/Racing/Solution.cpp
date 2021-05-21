#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll x,r,m;
    cin>>x>>r>>m;
    r*=60;
    m*=60;
    if(x<r){
        r+=(r-x);
    }
    if(r<=m){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
