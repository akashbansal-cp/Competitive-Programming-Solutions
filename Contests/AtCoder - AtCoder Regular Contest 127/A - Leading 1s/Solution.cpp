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
int main()
{
    fio
    ll n;cin>>n;
    vector<int> d;
    while(n!=0){
        d.push_back(n%10);
        n/=10;
    }
    reverse(d.begin(),d.end());
    n=d.size();
    ll ans=0;
    for(int i=1;i<n;++i){
        for(int j=0;j<i;++j){
            ans+=((ll)(i-j)*(ll)pow(9,j));
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<n;++i){
        for(int j=0;j<=d[i+1];++j){
            if(j==1)continue;
            // means the current character is possible
            
        }
        if(d[i]==0)break;
        ll p=1;
        for(int j=i+1;j<n;++j){
            ll x=d[j]==0?1:d[j];
            p*=x;
        }
        ans+=(p*(i+1));
    }
    cout<<ans<<endl;
    return 0;
}
