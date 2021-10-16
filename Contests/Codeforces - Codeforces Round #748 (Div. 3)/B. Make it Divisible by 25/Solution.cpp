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
    string n;cin>>n;
    // find 25
    vector<string> d={"00","25","75","50"};
    int ans=100;
    for(int j=0;j<4;++j){
        int l=1;
        int ca=0;
        bool ach=false;
        for(int i=n.length()-1;i>=0;--i){
            if(n[i]==d[j][l]){
                --l;
            }
            else  ++ca;
            if(l<0){
                ach=true;
                break;
            }
        }
        if(ach)ans=min(ca,ans);
    }
    cout<<ans<<endl;
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
