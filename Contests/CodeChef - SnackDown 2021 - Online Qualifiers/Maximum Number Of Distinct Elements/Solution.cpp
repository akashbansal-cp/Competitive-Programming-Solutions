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
    vector<int> d(n);
    for(int i=0;i<n;++i)cin>>d[i];
    map<int,vector<int>> data;
    for(int i=0;i<n;++i)data[d[i]].push_back(i);
    vector<int> ans(n);
    int c=0;
    for(auto e : data){
        for(int i=0;i<e.second.size();++i){
            if(c < e.first){
                ans[e.second[i]]=c;
                ++c;
            }
            else ans[e.second[i]]=c;
        }
    }
    for(int i=0;i<n;++i)cout<<ans[i]<<' ';
    cout<<endl;
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
