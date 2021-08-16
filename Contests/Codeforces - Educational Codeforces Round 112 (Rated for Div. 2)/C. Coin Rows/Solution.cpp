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
    int m;cin>>m;
    vector<vector<int>> grid(2,vector<int> (m));
    for(int i=0;i<m;++i)cin>>grid[0][i];
    for(int i=0;i<m;++i)cin>>grid[1][i];
    int x=0,y=grid[1][0];
    for(int i=0;i<m;++i)x+=grid[0][i];
    x-=grid[0][0];
    int score=x;
    for(int i=1;i<m;++i){
        x-=grid[0][i];
        int s = max(x,y);
        score=min(score,s);
        y+=grid[1][i];
    }
    cout<<score<<endl;
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
