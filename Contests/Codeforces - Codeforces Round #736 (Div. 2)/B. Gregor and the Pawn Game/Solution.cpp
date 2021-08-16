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
    string x,y;
    cin>>y>>x;
    int m=0;
    for(int i=0;i<n;++i){
        // cout<<x[i]<<' '<<y[i]<<endl;
        if(x[i]=='1' && y[i]=='0')++m;
        else if(x[i]=='1' && y[i]=='1'){
            if(i-1 >= 0 && y[i-1]=='1'){
                y[i-1]='0';
                ++m;
            }
            else if(i+1 < n && y[i+1]=='1'){
                y[i+1]='0';
                ++m;
            }
        }
        // cout<<m<<endl;
    }
    // cout<<x<<endl<<y<<endl;
    cout<<m<<endl;
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
