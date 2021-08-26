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
    int c,p;
    cin>>c;
    vector<pair<int,int>> data(c,{0,0});
    for(int i=0;i<c;++i){
        int x;cin>>x;
        for(int j=0;j<x;++j){
            cin>>p;
            data[i].first=max(data[i].first,p-j);
        }
        data[i].second=x;
    }
    sort(data.begin(),data.end());
    // for(auto e:data)cout<<e.first<<' '<<e.second<<endl;
    int in=0,al=0;
    for(int i=0;i<c;++i){
        if(in+al > data[i].first){
            al+=data[i].second;
        }
        else{
            // cout<<'c'<<endl;
            // cout<<data[i].first<<' '<<data[i].second<<endl;
            in=data[i].first+1-al;
            al+=data[i].second;
        }
        // cout<<in<<' '<<al<<endl;
    }
    cout<<in<<endl;
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
