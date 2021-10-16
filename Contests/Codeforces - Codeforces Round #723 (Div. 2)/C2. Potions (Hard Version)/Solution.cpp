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
    int n;
    cin>>n;
    vector<ll> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    ll s=0;
    int x=0;
    multiset<ll> d;
    for(int i=0;i<n;++i){
        if(s+data[i] >= 0){
            if(data[i] < 0)
                d.insert(data[i]);
            s+=data[i];
            ++x;
        }
        else{
            if(*d.begin() < data[i]){
                s-=(*d.begin());
                s+=data[i];
                d.erase(d.begin());
                d.insert(data[i]);
            }
        }
    }
    cout<<x<<endl;
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
