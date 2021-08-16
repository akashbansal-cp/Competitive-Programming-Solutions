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
    int n,m;cin>>n>>m;
    int x=n,y=m;
    if(n==m){
        for(int i=30;i>=0;--i){
            if(n==pow(2,i)-1){
                cout<<n+1<<endl;
                return;
            }
        }
    }
    int ans=0;
    for(int i=30;i>=0;--i){
        int p=(1<<i);
        bool a=x&p;
        bool b=y&p;
        if(a==true && b==false)break;
        else if(a==false && b==true)ans+=pow(2,i);
    }
    // cout<<ans<<' '<<(ans^n)<<' '<<m<<endl;
    if((ans^n) > m)cout<<ans;
    else cout<<ans+1;
    cout<<endl;
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
