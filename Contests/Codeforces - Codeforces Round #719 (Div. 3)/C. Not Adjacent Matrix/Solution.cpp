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
    int n;
    cin>>n;
    if(n==2){cout<<-1<<endl;return;}
    vector<vector<int>> ans(n,vector<int> (n,-1));
    int p=1;
    bool z=true;
    for(int i=0;i<n;++i){
        int x;
        if(z==true)x=0;
        else x=1;
        for(;x<n;x+=2){
            ans[i][x]=p;
            ++p;
        }
        z=!z;
    }
    z=false;
    for(int i=0;i<n;++i){
        int x;
        if(z==true)x=0;
        else x=1;
        for(;x<n;x+=2){
            ans[i][x]=p;
            ++p;
        }
        z=!z;
    }
    for(vector<int> e:ans){
        for(int f:e)cout<<f<<' ';
        cout<<endl;
    }
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
