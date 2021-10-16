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
    for(int i=0;i<n;++i){
        cin>>d[i];
    }
    bool c=false;
    for(int i=1;i<n;++i){
        if(d[i]-d[0]!=i){
            c=true;
            break;
        }
    }
    if(c)cout<<1<<endl;
    else cout<<n<<endl;
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
