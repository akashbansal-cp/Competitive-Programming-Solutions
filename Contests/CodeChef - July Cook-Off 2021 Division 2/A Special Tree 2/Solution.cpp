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
    int p=0;
    int x,y;cin>>x>>y;
    if(x%2==0 && y%2==0){

    }
    else if(x%2==0){
        // y is odd
        if(__gcd(x,y)==1)++p;
    }
    else if(y%2==0){
        if(__gcd(x,y)==1)++p;
    }
    else{
        if(__gcd(x,y)!=1);
        else if(__gcd(x,y+1)!=1)++p;
        else if(__gcd(x+1,y)!=1)++p;
        else p+=2;
    }
    cout<<p<<endl;
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
