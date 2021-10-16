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
    int c,d;
    cin>>c>>d;
    if(c==0 && d==0){
        cout<<0<<endl;
        return;
    }
    if(c==d){
        cout<<1<<endl;
        return;
    }
    if(c+d==0){
        cout<<1<<endl;
        return;
    }
    if(abs(c-d)%2==0){
        cout<<2<<endl;
    }
    else cout<<-1<<endl;
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
