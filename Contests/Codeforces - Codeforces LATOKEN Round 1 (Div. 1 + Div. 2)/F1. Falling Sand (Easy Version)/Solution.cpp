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
    int n,m;
    cin>>n>>m;
    vector<string> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<int> count(m);
    for(int i=0;i<m;++i)cin>>count[i];
    vector<bool> tbf(m,false);
    vector<int> limit(m);
    for(int i=0;i<m;++i){
        int j=n-1;
        for(int j=n-1;j>=0;--j){
            if(data[j][i]=='.'){
                limit[i]=j;break;
            }
        }
        if(j!=-1)break;
        limit[i]=-1;
    }
    for(auto e:limit)cout<<e<<' ';cout<<endl;
    int c=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(i > limit[j]){
                tbf[j]=false;
                continue;
            }
            if(data[i][j]=='#'){
                if(j>0 && tbf[j-1]==true){
                    tbf[j]=true;
                }
                if(j<n-1 && tbf[j+1]==true){
                    tbf[j]=true;
                }
                if(tbf[j]==false){
                    cout<<i<<' '<<j<<endl;
                    tbf[j]=true;
                    ++c;
                }
            }
        }
    }
    cout<<c<<endl;
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
