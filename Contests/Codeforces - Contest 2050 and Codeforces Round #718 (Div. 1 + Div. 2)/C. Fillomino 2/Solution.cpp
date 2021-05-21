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
    int n;cin>>n;
    vector<int> per(n);
    for(int i=0;i<n;++i)cin>>per[i];
    vector<vector<int>> data(n,vector<int> (n,-1));
    data[0]=per;
    for(int i=0;i<n-1;++i){
        bool dir=true;
        vector<int> new_per(n,-1);
        for(int j=i;j<per.size();++j){
            if(per[j]==1)dir=!dir;
            else if(dir==true){
                new_per[j+1]=per[j]-1;
                data[i+1][j+1]=data[i][j];
            }
            else if(dir==false){
                new_per[j]=per[j]-1;
                data[i+1][j]=data[i][j];
            }
        }
        per=new_per;
    }
    for(int i=0;i<n;++i){
        for(int j=i;j>=0;--j){
            cout<<data[j][i]<<' ';
        }
        cout<<endl;
    }
    // for(vector<int> e:data){
    //     for(int f:e)cout<<f<<' ';cout<<endl;
    // }
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
