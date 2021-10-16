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
    int t;
    int z=n/2;
    vector<vector<bool>> data(n,vector<bool>(5,false));
    for(int i=0;i<n;++i){
        for(int j=0;j<5;++j){
            cin>>t;
            if(t)data[i][j]=true;
        }
    }
    for(int i=0;i<5;++i){
        for(int j=i+1;j<5;++j){
            int a=0,b=0,c=0,d=0;
            for(int k=0;k<n;++k){
                if(data[k][i]==1 && data[k][j]==0)++a;
                else if(data[k][i]==0 && data[k][j]==1)++b;
                else if(data[k][i]==1 && data[k][j]==1)++c;
                else ++d;
            }
            if(d==0 && a<=z && b<=z){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

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
