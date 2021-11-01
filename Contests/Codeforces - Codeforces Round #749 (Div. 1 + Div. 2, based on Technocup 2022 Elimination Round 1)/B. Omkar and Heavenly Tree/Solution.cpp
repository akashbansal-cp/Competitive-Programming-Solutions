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
    int n,m;cin>>n>>m;
    set<int> p;
    int a,b,c;
    for(int i=0;i<m;++i){
        cin>>a>>b>>c;
        p.insert(b);
    }
    int x;
    for(int i=1;i<=n;++i){
        if(p.find(i)==p.end()){
            x=i;
            break;
        }
    }
    for(int i=1;i<=n;++i){
        if(i!=x)cout<<x<<' '<<i<<endl;
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
