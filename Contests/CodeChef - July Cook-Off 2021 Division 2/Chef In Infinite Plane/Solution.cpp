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
    int temp;
    map<int,int>  d;
    for(int i=0;i<n;++i){
        cin>>temp;
        d[temp]++;
    }
    int ans=0;
    for(auto e:d){
        int x=e.first;
        ans+=min(e.second,e.first-1);
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
