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
    int n,m;cin>>n>>m;
    int t=n*m;
    vector<int> p(t);
    for(int i=0;i<t;++i)cin>>p[i];
    map<int,vector<int>> data;
    for(int i=0;i<t;++i){
        data[p[i]].push_back(i);
    }
    vector<vector<int>> ind(n,vector<int>(m,-1));
    int x=0,y=0;
    for(auto e:data){
        int p=e.second.size(),l=e.second.size(),ci=0;
        while(l>0){
            int z=min(m-y,p-ci);
            for(int i=z+ci-1;i>=ci;--i){
                ind[x][y]=e.second[i];
                ++y;
                if(y==m)x++,y=0;
            }
            l-=z;
            ci+=z;
        }
    }
    // for(auto e:ind){
    //     for(int f:e)cout<<f<<' ';cout<<endl;
    // }
    ll inc=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            for(int k=0;k<j;++k){
                if(ind[i][k] < ind[i][j])++inc;
            }
        }
    }
    cout<<inc<<endl;
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
