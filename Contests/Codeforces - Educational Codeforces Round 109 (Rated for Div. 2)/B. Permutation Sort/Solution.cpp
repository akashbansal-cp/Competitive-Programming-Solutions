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
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    // if sorted
    for(int i=1;i<=n;++i){
        if(i!=data[i-1])break;
        if(i==n){
            cout<<0<<endl;
            return;
        }
    }
    if(data[0]==1 || data[n-1]==n){
        cout<<1<<endl;
        return;
    }
    if(data[0]==n && data[n-1]==1){
        cout<<3<<endl;
        return;
    }
    cout<<2<<endl;
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
