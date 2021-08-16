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
    ll n;cin>>n;
    if(n<=6){
        cout<<15<<endl;
        return;
    }
    ll x1 = n/6,y1=n%6,x2=0,x3=0;
    if(y1==0);
    else if(y1==1){
        --x1;++x2;
    }
    else if(y1==2){
        --x1,++x2;
    }
    else if(y1==3){
        --x1,++x3;
    }
    else if(y1==4){
        --x1,++x3;
    }
    else if(y1==5){
        ++x1;
    }
    ll ans = ((ll)15*x1) + ((ll)20*x2) + ((ll)25*x3);
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
