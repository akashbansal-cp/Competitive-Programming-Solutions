#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll p,tmp;
    cin>>p;
    ll ans=LONG_LONG_MAX;
    for(int i=0;i<3;++i){
        cin>>tmp;
        if(p%tmp==0)
            ans=0;
        else{
            ans=min(ans,tmp-(p%tmp));
        }
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
