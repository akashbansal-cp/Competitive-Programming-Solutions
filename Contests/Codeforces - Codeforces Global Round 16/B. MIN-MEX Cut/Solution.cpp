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
    string s;cin>>s;
    int n=s.length();
    string p="";
    p+=s[0];
    for(int i=1;i<n;++i){
        if(s[i]!=s[i-1])p+=s[i];
    }
    if(p=="0")cout<<1;
    else if(p=="1")cout<<0;
    else if(p=="01")cout<<1;
    else if(p=="10")cout<<1;
    else if(p=="101")cout<<1;
    else cout<<2;
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
