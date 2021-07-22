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
    int n,k;cin>>n>>k;
    int x=0;
    cout<<x<<endl;
    int r;
    cin>>r;
    if(r==1)return;
    for(int i=1;i<n;++i){
        int p = (i^(i-1));
        cout<<p<<endl;
        cin>>r;
        if(r==1){
            return;
        }
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
