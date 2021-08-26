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
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    sort(data.begin(),data.end());
    ll ans = 0;
    for(int i=n-1;i>=0;--i){
        if(data[i]+data[i-1] > x && k!=0){
            ans=ans+x;
            --k;
            --i;
        }
        else{
            ans=ans+data[i];
        }
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
