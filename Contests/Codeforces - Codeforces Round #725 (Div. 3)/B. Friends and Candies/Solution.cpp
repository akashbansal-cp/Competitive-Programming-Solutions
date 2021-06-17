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
    ll n;
    cin>>n;
    vector<ll> data(n);
    ll sum=0;
    for(int i=0;i<n;++i){
        cin>>data[i];
        sum+=data[i];
    }
    if(sum%n!=0){
        cout<<"-1"<<endl;return;
    }
    // ll t=0;
    sort(data.begin(),data.end());
    ll k=LLONG_MAX;
    for(int i=n;i>0;--i){
        // t+=data[i];
        // sum-=data[i];
        if(sum/n >= data[i-1]){
            cout<<n-i<<endl;return;
        }
    }
    cout<<n<<endl;
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
