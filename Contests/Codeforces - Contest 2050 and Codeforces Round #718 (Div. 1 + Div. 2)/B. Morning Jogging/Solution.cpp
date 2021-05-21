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
    int n,m,t;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> arr;
    vector<vector<int>> data(n,vector<int> (m,-1));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>t;
            arr.push_back({t,{i,j}});
        }
    }
    sort(arr.begin(),arr.end());
    // for(auto e:arr)cout<<e.second.first<<' '<<e.second.second<<endl;
    for(int i=0;i<m;++i){
        data[arr[i].second.first][i]=arr[i].first;
    }
    vector<int> p(n,0);
    int a,x=n*m;
    for(int i=m;i<x;++i){
        // cout<<arr[i].first<<' ';
        a=arr[i].second.first;
        while(data[a][p[a]]!=-1)++p[a];
        data[a][p[a]]=arr[i].first;
        // ++p[a];
    }
    // for(int e:p)cout<<e<<"t ";cout<<endl;
    for(vector<int>& e:data){
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
