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
    vector<int> p(m);
    for(int i=0;i<m;++i)cin>>p[i];
    map<int,vector<int>> data;
    for(int i=m-1;i>=0;--i){
        data[p[i]].push_back(i);
    }
    vector<int> seat(m);
    int s=0;
    for(auto e:data){
        for(int f:e.second){
            seat[f]=s;
            ++s;
        }
    }   
    // for(int e:seat)cout<<e<<' ';cout<<endl;
    int inc=0;
    vector<bool> occ(m,false);
    for(int i=0;i<m;++i){
        for(int j=0;j<seat[i];++j){
            if(occ[j]==true)++inc;
        }
        occ[seat[i]]=true;
        // cout<<inc<<' ';
    }
    // cout<<endl;
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
