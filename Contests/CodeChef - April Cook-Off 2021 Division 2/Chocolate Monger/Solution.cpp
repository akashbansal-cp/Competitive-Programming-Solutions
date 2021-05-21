#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> flavor(n);
    for(int i=0;i<n;++i)cin>>flavor[i];
    sort(flavor.begin(),flavor.end());
    set<int> d;
    for(int e:flavor)d.insert(e);
    int p=d.size();
    if(n-p >= x){cout<<p<<endl;}
    else cout<<n-x<<endl;
    
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
