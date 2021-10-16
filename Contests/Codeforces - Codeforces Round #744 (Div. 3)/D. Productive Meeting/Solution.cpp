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
    set<pair<int,int>,greater<pair<int,int>>> data;
    int t;
    for(int i=0;i<n;++i){
        cin>>t;
        if(t!=0)
        data.insert({t,i+1});
    }
    pair<int,int>a,b;
    vector<pair<int,int>> d;
    while(data.size() >= 2){
        a=*data.begin();
        data.erase(data.begin());
        b=*data.begin();
        data.erase(data.begin());
        d.push_back({a.second,b.second});
        --a.first,--b.first;
        if(a.first!=0)data.insert(a);
        if(b.first!=0)data.insert(b);
    }
    cout<<d.size()<<endl;
    for(auto e:d)cout<<e.first<<' '<<e.second<<endl;
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
