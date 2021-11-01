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
    vector<string> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<bool> p(m,true);
    p[0]=true;
    for(int i=1;i<m;++i){
        for(int j=1;j<n;++j){
            if(data[j][i]=='.' && data[j-1][i]=='X' && data[j][i-1]=='X'){
                p[i]=false;
                break;
            }
        }
    }
    vector<int> d(m);
    int x=0;
    for(int i=0;i<m;++i){
        if(!p[i])++x;
        d[i]=x;
    }
    int q;cin>>q;
    for(int i=0;i<q;++i){
        int x,y;cin>>x>>y;
        --x,--y;
        if(x==y)cout<<"YES\n";
        else{
            if(d[x]==d[y])cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
int main()
{
    fio
    solve();
    return 0;
}
