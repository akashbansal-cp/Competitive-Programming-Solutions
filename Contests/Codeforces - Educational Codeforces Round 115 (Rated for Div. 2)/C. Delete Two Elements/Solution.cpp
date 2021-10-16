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
    map<ll,int> data;
    ll x;
    double sum=0;
    for(int i=0;i<n;++i){
        cin>>x;
        sum+=x;
        data[x]++;
    }
    double mean = sum/n;
    sum=mean*2;
    if(sum!=(ll)sum){
        cout<<0<<endl;
        return;
    }
    ll ans = 0;
    for(auto e:data){
        ll f=sum-e.first;
        if(f < e.first)continue;
        if(f==e.first){
            ll m=(ll)e.second*(ll)(e.second-1);
            m/=2;
            ans+=m;
        }
        else{
            ll m=(ll)data[f]*(ll)e.second;
            ans+=m;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
