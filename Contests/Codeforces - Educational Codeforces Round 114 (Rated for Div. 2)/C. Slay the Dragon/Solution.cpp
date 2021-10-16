#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<ll> pet(n);
    ll sum=0;
    for(int i=0;i<n;++i)cin>>pet[i];
    for(ll e:pet)sum+=e;
    sort(pet.begin(),pet.end());
    int m;cin>>m;
    ll x,y;
    for(int i=0;i<m;++i){
        cin>>x>>y;
        int j=0,l=n-1;
        while(l-j > 1){
            int md=(l+j)/2;
            if(pet[md] > x)l=md;
            else j=md;
        }
        if(pet[l] <= x)j=l;
        ll ans=LLONG_MAX;
        if(pet[j] >= x)ans=(sum-pet[j] < y) ? y-sum+pet[j] : 0;
        else ans=x-pet[j] + ((sum-pet[j] < y) ? y-sum+pet[j] : 0);
        if(j-1 >= 0){
            ll ca;
            if(pet[j-1] >= x)ca=(sum-pet[j-1] < y) ? y-sum+pet[j-1] : 0;
            else ca=x-pet[j-1] + ((sum-pet[j-1] < y) ? y-sum+pet[j-1] : 0);
            ans=min(ans,ca);
        }
        if(j+1 < n){
            ll ca;
            if(pet[j+1] >= x)ca=(sum-pet[j+1] < y) ? y-sum+pet[j+1] : 0;
            else ca=x-pet[j+1] + ((sum-pet[j+1] < y) ? y-sum+pet[j+1] : 0);
            ans=min(ans,ca);
        }
        cout<<ans<<endl;
    }

}
int main()
{
    fio
    // int t;
    // cin >> t;
    // while (t--)
        solve();
    return 0;
}
