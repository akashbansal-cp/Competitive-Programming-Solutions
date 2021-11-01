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
    for(int i=0;i<n-1;++i){
        if((s[i]=='L'&&s[i+1]=='L') || (s[i]=='R'&&s[i+1]=='R')){
            cout<<"YES\n";
            return;
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
