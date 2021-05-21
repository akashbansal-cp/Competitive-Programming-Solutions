#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll> attack(n);
    for(ll i=0;i<n;++i)
        cin>>attack[i];
    vector<ll> health(n);
    for(ll i=0;i<n;++i)
        cin>>health[i];
    int z=0;
    for(int i=0;i<n;++i){
        z=attack[i] > attack[z] ? i:z;
    }
    for(ll i=0;i<n;++i){
        if(i!=z){
        ll x=health[i]/a;
        if(health[i]%a!=0)
            ++x;
        b-=(attack[i]*x);
        if(b<=0){
            cout<<"NO"<<endl;
            return;
        }
        }
    }
    ll x=health[z]/a;
    if(health[z]%a!=0)
        ++x;
    ll y=b/attack[z];
    if(b%attack[z]!=0)
        ++y;
    if(x>y){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
