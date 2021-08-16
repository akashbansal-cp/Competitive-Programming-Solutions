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
    int n;cin>>n;
    string s;cin>>s;
    int x=0,y=n-1;
    while(x<n && s[x]=='?')++x;
    if(x==n){
        string ans = "";
        char z='R';
        for(int i=0;i<n;++i){
            ans+=z;
            if(z=='R')z='B';
            else z='R';
        }
        cout<<ans<<endl;
        return;
    }
    for(int i=x-1;i>=0;--i){
        if(s[i+1]=='R')s[i]='B';
        else s[i]='R';
    }
    for(int i=1;i<n;++i){
        if(s[i]=='?'){
            if(s[i-1]=='R')s[i]='B';
            else s[i]='R';
        }
    }
    cout<<s<<endl;
    return;
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
