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
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2 || c1==c2){
        if(r1==r2 && c1==c2)cout<<0<<' ';
        else cout<<1<<' ';
    }
    else cout<<2<<' ';
    if((r1+r2+c1+c2)%2==0){
        if(abs(r1-r2) == abs(c1-c2)){
            if(r1==r2)cout<<0<<' ';
            else cout<<1<<' ';
        }
        else cout<<2<<' ';
    }
    else cout<<0<<' ';
    cout<<max(abs(r1-r2),abs(c1-c2))<<endl;
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
