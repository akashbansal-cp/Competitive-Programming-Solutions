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
    string ans="";
    for(int i=0;i<n;++i)ans+="()";
    cout<<ans<<'\n';
    for(int i=1;i<n;++i){
        int j=2*n-2*i-2;
        // cout<<j<<endl;
        for(int k=0;k<i+1;++k,++j)ans[j]='(';
        for(int k=0;k<i+1;++k,++j)ans[j]=')';
        cout<<ans<<endl;
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
