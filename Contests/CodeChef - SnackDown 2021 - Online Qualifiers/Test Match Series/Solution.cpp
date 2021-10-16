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
    vector<int> d(5);
    for(int i=0;i<5;++i)cin>>d[i];
    int in=0,e=0;
    for(int i=0;i<5;++i){
        if(d[i]==1)in++;
        else if(d[i]==2)e++;
    }
    if(in==e)cout<<"DRAW\n";
    else if(in  > e)cout<<"INDIA\n";
    else cout<<"ENGLAND\n";
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
