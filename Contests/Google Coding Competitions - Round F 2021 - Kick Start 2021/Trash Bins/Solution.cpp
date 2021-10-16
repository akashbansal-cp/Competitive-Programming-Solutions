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
    ll n;cin>>n;
    string s;cin>>s;
    ll p;
    for(ll i=0;i<n;++i)if(s[i]=='1'){
        p=i;
        break;
    }
    ll q=-1;
    ll ans=0;
    for(ll i=0;i<n;++i){
        if(p==-1){
            ans+=abs(q-i);
            continue;
        }
        if(i==p){
            q=p;
            ++p;
            while(p<n){
                if(s[p]=='1')break;
                ++p;
            }
            if(p==n)p=-1;
        }
        else{
            ll z=INT_MAX;
            if(p!=-1)z=min(z,abs(p-i));
            if(q!=-1)z=min(z,abs(q-i));
            ans+=z;
        }
    }
    cout<<"Case #"<<t<<": "<<ans<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)solve(i);
    return 0;
}