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
    string s1,s2;cin>>s1>>s2;
    if(s1==s2){
        cout<<"YES\n";
        return;
    }
    bool a=false,b=false;
    for(char c:s2){
        if(c=='1')a=true;
        if(c=='0')b=true;
    }
    if(a&b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
