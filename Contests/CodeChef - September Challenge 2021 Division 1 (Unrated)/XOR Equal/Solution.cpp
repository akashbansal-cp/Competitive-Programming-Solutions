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
    int n,x;cin>>n>>x;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    unordered_map<int,int> d1,d2;
    for(int e:data)d1[e]++,d2[e^x]++;
    if(x==0){
        int p=0;
        for(auto e:d1)p=max(p,e.second);
        cout<<p<<' '<<0<<endl;
        return;
    }
    pair<int,int> d={0,0};
    for(auto e:d1){
        if(e.second + d2[e.first] > d.first){
            d={e.second + d2[e.first],d2[e.first]};
        }
        else if(e.second+d2[e.first] == d.first){
            d.second=min(d.second,d2[e.first]);
        }
    }
    for(auto e:d2){
        if(e.second + d1[e.first] > d.first){
            d={e.second + d1[e.first],e.second};
        }
        else if(e.second+d1[e.first] == d.first){
            d.second=min(d.second,e.second);
        }
    }
    cout<<d.first<<' '<<d.second<<endl;
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
