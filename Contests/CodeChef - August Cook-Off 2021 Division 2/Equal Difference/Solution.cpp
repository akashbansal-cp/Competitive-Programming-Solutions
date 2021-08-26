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
    map<int,int> data;
    int  temp;
    for(int i=0;i<n;++i){
        cin>>temp;
        data[temp]++;
    }
    if(n==2){cout<<0<<endl;return;}
    multiset<int,greater<int>> d;
    for(auto e:data)d.insert(e.second);
    if(d.size()<2){
        cout<<0<<endl;
        return;
    }
    int ans = 0;
    auto itr=d.begin();
    ans+=*(itr);
    cout<<n-ans<<endl;
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
