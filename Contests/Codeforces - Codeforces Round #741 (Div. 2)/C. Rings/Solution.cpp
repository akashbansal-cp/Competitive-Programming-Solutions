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
    for(int i=0;i<n;++i){
        if(s[i]=='0'){
            if(2*i < n-1){
            // if(n-i-1 >= n/2){
                cout<<i+1<<' '<<n<<' '<<i+2<<' '<<n<<endl;
                return;
            }
            else{
                cout<<1<<' '<<i+1<<' '<<1<<' '<<i<<endl;
                return;
            }

        }
    }
    cout<<1<<' '<<n-1<<' '<<2<<' '<<n<<endl;
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
