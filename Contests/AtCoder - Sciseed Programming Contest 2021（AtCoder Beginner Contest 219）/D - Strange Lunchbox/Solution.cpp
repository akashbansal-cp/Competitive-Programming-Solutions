#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define INF 1000000
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fio
    int n;cin>>n;
    int x,y;cin>>x>>y;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i]>>b[i];
    vector<vector<int>> data(301,vector<int>(301,INF));
    data[0][0]=0;
    for(int k=0;k<n;++k){
        vector<vector<int>> d(301,vector<int>(301,INF));
        for(int i=0;i<301;++i){
            for(int j=0;j<301;++j){
                if(data[i][j]!=INF)
                    d[min(i+a[k],300)][min(j+b[k],300)]=min(data[i][j]+1,d[min(i+a[k],300)][min(j+b[k],300)]);
            }
        }
        for(int i=0;i<301;++i){
            for(int j=0;j<301;++j){
                data[i][j]=min(data[i][j],d[i][j]);
            }
        }
    }
    int ans=INF;
    for(int i=0;i<301;++i){
        for(int j=0;j<301;++j){
            if(i>=x && j>=y)ans=min(ans,data[i][j]);
        }
    }
    if(ans==INF)cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}
