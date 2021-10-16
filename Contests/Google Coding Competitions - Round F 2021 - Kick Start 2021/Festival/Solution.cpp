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
void solve(int t)
{
    ll n,d,k;cin>>d>>n>>k;
    ll x,y,h;
    vector<vector<ll>> start(d),end(d);
    for(ll i=0;i<n;++i){
        cin>>h>>x>>y;
        --x,--y;
        start[x].push_back(h);
        end[y].push_back(h);
    }
    multiset<ll> s;
    multiset<ll> e;
    ll ans=0,cans = 0;
    for(ll i=0;i<d;++i){
        for(ll z:start[i]){
            if(s.size() < k){
                s.insert(z);
                cans+=z;
            }
            else{
                if((*s.begin()) < z){
                    e.insert(*s.begin());
                    cans-=(*s.begin());
                    s.erase(s.begin());
                    s.insert(z);
                    cans+=z;
                }
                else e.insert(z);
            }
        }
        ans=max(ans,cans);
        for(ll z:end[i]){
            if(e.find(z)!=e.end()){
                e.erase(e.find(z));
            }
            else{
                cans-=z;
                s.erase(s.find(z));
                if(e.empty()==false){
                    ll p=*e.rbegin();
                    e.erase(e.find(p));
                    s.insert(p);
                    cans+=p;
                }
            }
        }
    }
    cout<<"Case #"<<t<<": "<<ans<<endl;

}
int main()
{
    fio
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)
        solve(i);
    return 0;
}
