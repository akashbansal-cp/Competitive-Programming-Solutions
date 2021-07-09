#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll x,y;
    cin>>x>>y;
    if(y<x)swap(x,y);
    int p=0;
    while(x < y){++p;x*=2;}
    // cout<<p<<endl;
    if(x!=y){
        cout<<-1<<endl;return;
    }
    int ans=0;
    ans=p/3;
    p%=3;
    ans+=p/2;
    p%=2;
    ans+=p;
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
