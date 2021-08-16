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
    int a=0,b,c=0;
    for(int i=0;i<3;++i){
        cin>>b;
        a+=b;
    }
    for(int i=0;i<3;++i){
        cin>>b;
        c+=b;
    }
    if(c>a)cout<<"2";
    else cout<<1;
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
