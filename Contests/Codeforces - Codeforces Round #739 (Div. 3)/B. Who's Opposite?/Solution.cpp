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
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)swap(a,b);
    int tp=b-a;
    if(a > tp){
        cout<<-1<<endl;
        return;
    }
    if(c <= tp){
        c+=tp;
    }
    else if(c>2*tp){
        cout<<-1<<endl;
        return;
    }
    else c-=tp;
    cout<<c<<endl;
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
