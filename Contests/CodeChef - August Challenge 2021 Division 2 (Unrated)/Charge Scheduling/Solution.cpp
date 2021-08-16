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
    vector<vector<int>> data(n,vector<int>(3));
    for(int i=0;i<n;++i)cin>>data[i][1];
    for(int i=0;i<n;++i)cin>>data[i][0];
    for(int i=0;i<n;++i)data[i][2]=i+1;
    sort(data.begin(),data.end());
    set<pair<int,int>> d;
    int end=0;
    for(int i=0;i<n;++i){
        if(end+data[i][1] <= data[i][0]){
            d.insert({data[i][1],data[i][2]});
            end+=data[i][1];
        }
        else if(d.empty()!=true){
            int x=(*d.begin()).first;
            if(x > data[i][1]){
                d.erase(d.begin());
                d.insert({data[i][1],data[i][2]});
                end=end-x+data[i][1];
            }
        }
    }
    int e=0;
    vector<vector<int>> inter;
    for(int i=0;i<n;++i){
        if(d.find({data[i][1],data[i][2]})!=d.end()){
            inter.push_back({data[i][2],e,e+data[i][1]});
            e+=data[i][1];
        }
    }
    cout<<inter.size()<<endl;
    for(auto e:inter){
        for(int f:e)cout<<f<<' ';cout<<endl;
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
