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
    int n,k;cin>>n>>k;
    vector<int> d(k);
    for(int i=0;i<k;++i)cin>>d[i];
    sort(d.begin(),d.end());
    int lm=n,save=0;
    for(int i=k-1;i>=0;--i){
        if(lm < 0)break;
        lm=min(lm,d[i])-(n-d[i]);
        if(lm >= 0)++save;
    }
    cout<<save<<endl;
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
