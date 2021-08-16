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
    int n,m;
    cin>>n>>m;
    set<int> d;
    for(int i=1;i<=n;++i)d.insert(i);
    vector<int> def(n,0);
    int l,r,x;
    for(int i=0;i<m;++i){
        cin>>l>>r>>x;
        auto init = d.lower_bound(l);
        auto fin = d.lower_bound(r+1);
        for(;init!=fin;){
            auto p = init;
            ++p;
            if(*(init) != x){
                def[*init-1]=x;
                d.erase(init);
            }
            init=p;
        }
    }
    for(int e:def)cout<<e<<' ';
    cout<<endl;
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
