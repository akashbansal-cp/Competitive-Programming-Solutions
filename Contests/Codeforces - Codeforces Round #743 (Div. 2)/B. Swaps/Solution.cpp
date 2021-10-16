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
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    vector<int> p(n);
    for(int i=0;i<n;++i){
        p[(a[i]-1)/2]=i;
    }
    vector<int> q(n);
    int z=0;
    int l=0;
    for(int i=0;i<n;++i){
        if(b[i] > l){
            l=b[i];
            while(z<n && z*2+1 < l){
                q[z]=i;
                ++z;
            }
        }
    }
    int ans = INT_MAX;
    for(int i=0;i<n;++i){
        ans=min(ans,p[i]+q[i]);
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
