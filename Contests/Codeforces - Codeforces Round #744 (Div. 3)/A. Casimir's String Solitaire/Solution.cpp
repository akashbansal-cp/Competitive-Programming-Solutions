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
    // int n;cin>>n;
    string s;cin>>s;
    vector<int> p(3,0);
    for(char c:s){
        p[c-'A']++;
    }

    if((p[0]+p[2])==p[1])cout<<"YES"<<endl;
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
