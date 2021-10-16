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
    vector<string> _s(3);
    cin>>_s[0]>>_s[1]>>_s[2];
    string s;cin>>s;
    string t="";
    for(int i=0;i<s.length();++i){
        t+=_s[s[i]-'1'];
    }
    cout<<t<<endl;
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
