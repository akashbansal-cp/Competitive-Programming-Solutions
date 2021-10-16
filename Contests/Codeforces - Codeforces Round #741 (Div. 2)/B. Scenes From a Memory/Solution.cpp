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
    int k;cin>>k;
    string s;cin>>s;
    set<int> d,e;
    for(char c:s){
        if(c=='1' || c=='4' || c=='6' || c=='8' || c=='9'){
            cout<<1<<'\n'<<c<<'\n';
            return;
        }
    }
    for(int i=1;i<k;++i){
        if(s[i]=='2' || s[i]=='5'){
            cout<<2<<'\n'<<s[i-1]<<s[i]<<endl;
            return;
        }
    }
    int x=0,y=0;
    for(char c:s){
        if(c=='3')++x;
        if(c=='7')++y;
    }
    if(x>=2){
        cout<<2<<'\n'<<33<<endl;
        return;
    }
    if(y>=2){
        cout<<2<<'\n'<<77<<endl;
        return;
    }
    for(int i=1;i<k;++i){
        if(s[i]=='7'){
            cout<<2<<'\n'<<s[0]<<s[i]<<endl;
            return;
        }
    }
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
