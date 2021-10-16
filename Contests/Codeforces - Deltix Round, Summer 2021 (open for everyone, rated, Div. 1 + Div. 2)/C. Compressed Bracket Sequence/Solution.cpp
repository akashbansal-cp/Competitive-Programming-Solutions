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
    vector<ll> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    if(n%2==1){
        --n;
        data.pop_back();
    }
    vector<ll> dp(n,0);
    for(int i=0;i<n;i+=2){
        dp[i]=min(data[i],data[i+1]);
        if(data[i] < data[i+1])continue;
        ll left=data[i]-data[i+1];
        ll r=0;
        for(int j=i+2;j<n;++j){
            if(j%2==1){
                r-=data[j];
                if(r<=0){
                    if(abs(r) <= left){
                        left-=abs(r);
                        dp[i]+=(abs(r)+1);
                        r=0;
                    }
                    else{
                        dp[i]+=(left+1);
                        break;
                    }
                }
            }
            else
                r+=data[j];
        }
    }
    // for(ll e:dp)cout<<e<<' ';cout<<endl;
    int ll p=0;
    for(ll e:dp)p+=e;
    cout<<p<<endl;
}
int main()
{
    fio
    int t=1;
    while (t--)
        solve();
    return 0;
}