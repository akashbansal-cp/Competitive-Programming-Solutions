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
    vector<vector<int>> data(n,vector<int>(5));
    for(int i=0;i<n;++i){
        cin>>data[i][0]>>data[i][1]>>data[i][2]>>data[i][3]>>data[i][4];
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int p=0;
    for(int i=1;i<n;++i){
        int x=0,y=0;
        for(int j=0;j<5;++j){
            if(data[i][j] > data[p][j])++x;
            else ++y;
        }
        if(x < y)p=i;
    }
    // cout<<p<<endl;
    bool con = true;
    for(int i=0;i<n;++i){
        if(i==p)continue;
        int x=0,y=0;
        for(int j=0;j<5;++j){
            if(data[i][j] > data[p][j])++x;
            else ++y;
        }
        if(x < y){
            con = false;
            break;
        }
    }
    if(con)cout<<p+1<<endl;
    else cout<<-1<<endl;
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
