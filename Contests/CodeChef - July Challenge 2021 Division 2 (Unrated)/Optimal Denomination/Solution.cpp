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
    ll total = 0;
    int n;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i){
        cin>>data[i];
        total+=(ll)data[i];
    }
    if(n==1){
        cout<<1<<endl;return;
    }
    vector<int> prefix(n);
    prefix[0]=data[0];
    for(int i=1;i<n;++i)prefix[i]=__gcd(prefix[i-1],data[i]);
    vector<int> suffix(n);
    suffix[n-1]=data[n-1];
    for(int i=n-2;i>=0;--i)suffix[i]=__gcd(suffix[i+1],data[i]);
    ll ans = min((total-data[0])/suffix[1],(total-data[n-1])/prefix[n-2]);
    for(int i=1;i<n-1;++i){
        ans=min(ans,(total-data[i])/__gcd(prefix[i-1],suffix[i+1]));
    }
    cout<<ans+1<<endl;
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
