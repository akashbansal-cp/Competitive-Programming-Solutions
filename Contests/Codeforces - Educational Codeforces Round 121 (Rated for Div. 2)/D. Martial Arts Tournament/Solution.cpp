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
    int t,n;cin>>n;
    map<int,int> p;
    for(int i=0;i<n;++i){
        cin>>t;
        p[t]++;
    }
    vector<int> z;
    for(auto e:p)z.push_back(e.second);
    for(int i=1;i<z.size();++i){
        z[i]=z[i]+z[i-1];
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
