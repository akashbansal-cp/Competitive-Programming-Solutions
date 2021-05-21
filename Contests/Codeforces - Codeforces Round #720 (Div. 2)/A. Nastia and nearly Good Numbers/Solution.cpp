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
    ll x,y;
    cin>>x>>y;
    if(y==1){
        cout<<"NO"<<endl;return;
    }
    int m=y-1,n=1;
    while(m==n){m+=y;}
    cout<<"YES"<<endl;
    cout<<x*n<<' '<<m*x<<" "<<(n+m)*x<<endl;
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
