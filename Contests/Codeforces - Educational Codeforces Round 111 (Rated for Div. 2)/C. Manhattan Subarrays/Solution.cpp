#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=n+n-1;
    for(int i=0;i<n;++i){
        if(i+2 < n){
            if(a[i] > a[i+1] && a[i+2]>a[i+1])++ans;
            else if(a[i] < a[i+1] && a[i+2]<a[i+1])++ans;
        }
        if(i+3<n){
            if(a[i+1]>a[i] && a[i+2]<a[i] && a[i+3]>a[i+2] && a[i+3]<a[i+1]){
                ++ans;
            }
            if(a[i+1]<a[i] && a[i+2]>a[i] && a[i+3]>a[i+1] && a[i+3]<a[i+2]){
                ++ans;
            }
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
