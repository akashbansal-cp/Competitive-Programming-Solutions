#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n,temp;
    cin>>n;
    set<ll,greater<ll>> data;
    for(ll i=0;i<2*n;++i){
        cin>>temp;
        data.insert(temp);
    }
    if(data.size()!=n){
        cout<<"NO"<<endl;
    }
    else{
        ll x=0,y=2*n;
        for(ll e:data){
            e-=x;
            if(e>0 && e%y==0){
                ll m=e/y;
                x+=(2*m);
                y-=2;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
