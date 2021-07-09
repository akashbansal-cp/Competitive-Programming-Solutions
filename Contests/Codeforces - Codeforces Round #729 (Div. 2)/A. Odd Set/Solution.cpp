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
    int x,n;cin>>n;
    int p=0;
    for(int i=0;i<2*n;++i){
        cin>>x;
        if(x%2==0)++p;
    }
    if(p==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
