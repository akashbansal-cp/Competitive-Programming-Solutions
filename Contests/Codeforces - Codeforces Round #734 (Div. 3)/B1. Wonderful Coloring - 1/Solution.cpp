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
    vector<int> f(26,0);
    for(int i=0;i<s.length();++i){
        f[s[i]-'a']++;
    }
    int p=0,q=0;
    for(int i=0;i<26;++i){
        if(f[i]==1)++q;
        else if(f[i]==2)++p;
        else if(f[i]>2)++p;
    }
    q/=2;
    cout<<q+p<<endl;
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
