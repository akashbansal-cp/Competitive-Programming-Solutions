#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n;cin>>n;
    ll tmp;
    ll sum=0;
    bool flag = true;
    for(ll i=0;i<n;++i){
        cin>>tmp;
        ll j = i * (i+1);
        j/=2;
        sum+=tmp;
        if(sum < j){
            flag = false;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
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
