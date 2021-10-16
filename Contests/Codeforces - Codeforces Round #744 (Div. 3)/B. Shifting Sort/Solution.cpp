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

    vector<vector<int>> d;
    int n;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    for(int i=0;i<n;++i){
        int mx=data[0],m=0;
        for(int j=0;j<n-i;++j){
            if(data[j] > mx){
                mx=data[j],m=j;
            }
        }
        if(m+1 != n-i){
            for(int j=m;j<n-i-1;++j){
                swap(data[j],data[j+1]);
            }
            data[n-i-1]=mx;
            d.push_back({m+1,n-i,1});
        }
    }
    cout<<d.size()<<endl;
    for(auto e:d)cout<<e[0]<<' '<<e[1]<<' '<<e[2]<<endl;
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
