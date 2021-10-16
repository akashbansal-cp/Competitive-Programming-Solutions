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
    vector<int> d(n);
    for(int i=0;i<n;++i)cin>>d[i];
    multiset<pair<int,int>> t;
    for(int i=0;i<n;++i)t.insert({d[i],i+1});
    vector<int> occ(n);
    map<int,int> m;
    for(int i=0;i<n;++i){
        occ[i]=m[d[i]];
        m[d[i]]++;
    }
    for(auto e:t){
        
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
