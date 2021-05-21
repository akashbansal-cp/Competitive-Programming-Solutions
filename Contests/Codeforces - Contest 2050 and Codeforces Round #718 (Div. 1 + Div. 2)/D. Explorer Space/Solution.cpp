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
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> hor(n,vector<int>(m-1));
    for(int i=0;i<n;++i){
        for(int j=0;j<m-1;++j)cin>>hor[i][j];
    }
    vector<vector<int>> ver(n-1,vector<int>(m));
    for(int i=0;i<n-1;++i){
        for(int j=0;j<m;++j)cin>>ver[i][j];
    }
    if(k%2==1){
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j)cout<<-1<<' ';
            cout<<endl;
        }
        return ;
    }
    vector<vector<int>> ans(n,vector<int>(m,0));
    k/=2;
    vector<vector<int>> temp(n,vector<int>(m,0));
    for(int i=0;i<k;++i){
        for(int x=0;x<n;++x){
            for(int y=0;y<m;++y){
                int p=INT_MAX;
                if(x>0) p=min(p,2*ver[x-1][y]+ans[x-1][y]);
                if(y>0) p=min(p,2*hor[x][y-1]+ans[x][y-1]);
                if(x<n-1) p=min(p,2*ver[x][y]+ans[x+1][y]);
                if(y<n-1) p=min(p,2*hor[x][y]+ans[x][y+1]);
                temp[x][y]=p;
            }
        }
        ans=temp;
    }
    for(vector<int> e:ans){
        for(int f:e)cout<<f<<' ';
        cout<<endl;
    }
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
