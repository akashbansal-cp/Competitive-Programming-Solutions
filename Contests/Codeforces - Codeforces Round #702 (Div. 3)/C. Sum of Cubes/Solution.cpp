#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll a,b;
    ll x;
    cin>>x;
    for(ll i=1;i<=10000;++i){
        a=i*i*i;
        ll m=1,n=10000;
        while(n-m > 1){
            ll z=(n+m)/2;
            b=z*z*z;
            if(a+b > x){
                n=z;
            }
            else{
                m=z;
            }
        }
        //check for m
        m=m*m*m;
        n=n*n*n;
        if(a+m == x || a+n == x){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
