#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> heights(n);
    for(ll i=0;i<n;++i){
        cin>>heights[i];
    }
    vector<ll> ind(n);
    ind[n-1]=INT_MAX,ind[n-2]=n-1;
    for(ll j=n-3;j>=0;--j){
        ll x=(heights[j+1]-heights[j])*(ind[j+1]-j-1);
        if(x <= heights[ind[j+1]]-heights[j+1])
            ind[j]=ind[j+1];
        else
            ind[j]=j+1;

        int p=0;
        while(1){
            if(ind[ind[j]]>=n)break;
            x=(heights[ind[j]]-heights[j])*(ind[ind[j]]-ind[j]);
            ll y=(heights[ind[ind[j]]]-heights[ind[j]])*(ind[j]-j);
            if(x > y)
                break;
            ind[j]=ind[ind[j]];
        }
    }
    ll ans=LLONG_MIN;
    for(int i=0;i<n-1;++i){
        ans=max(ans,ind[i]-i);
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
