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
bool check(string s,string t,int i){
    int x=t.length()-1;
    int n=s.length()-1;
    while(s[i]==t[x] && x>=0 && i<=n){
        if(i>=x && t.substr(0,x)==s.substr(i-x,x))return true;
        ++i,--x;
    }
    return false;
}
void solve(){
    string s,t; cin>>s>>t;
    for(int i=0;i<s.length();++i){
        if(s[i]==t[t.length()-1]){
            if(check(s,t,i)){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
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
