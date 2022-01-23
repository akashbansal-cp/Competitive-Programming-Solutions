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
    string s;
    cin>>s;
    vector<int> p(26,0);
    for(int i=0;i<s.length();++i)p[s[i]-'a']++;
    string a="";
    for(int i=0;i<26;++i){
        if(p[i]==2)a+=(char)('a'+i);
    }
    for(int i=0;i<26;++i)if(p[i]==2)a+=(char)('a'+i);
    for(int i=0;i<26;++i)if(p[i]==1)a+=(char)('a'+i);
    cout<<a<<endl;
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
