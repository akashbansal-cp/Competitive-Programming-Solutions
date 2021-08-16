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
vector<int> seg(pow(2,20));
void  build(int n,int x){
    --n;
    int i;
    bool con = true;
    for(i=x-1;i>0;--i){
        if(con)
            seg[i] = seg[i<<1]|seg[i<<1^1];
        else seg[i]=seg[i<<1]^seg[i<<1^1];
        if(i == pow(2,n))con = !con,--n;
    }
}
void modify(int pos,int val,int n){
    int p = pow(2,n)+pos-1;
    seg[p]=val;
    bool con = true;
    p>>=1;
    for(;p>0;p>>=1){
        if(con)
            seg[p]=seg[p<<1]|seg[p<<1^1];
        else seg[p]=seg[p<<1]^seg[p<<1^1];
        con = !con;
    }
}
void solve()
{
    int n,m;cin>>n>>m;
    int x=pow(2,n);
    for(int i=0;i<x;++i){
        cin>>seg[x+i];
    }
    // for(int i=0;i<=2*x;++i)cout<<seg[i]<<' ';cout<<endl;
    build(n,x);
    // for(int i=0;i<=2*x;++i)cout<<seg[i]<<' ';cout<<endl;
    int p,b;
    for(int i=0;i<m;++i){
        cin>>p>>b;
        modify(p,b,n);
        // for(int i=0;i<=2*x;++i)cout<<seg[i]<<' ';cout<<endl;
        cout<<seg[1]<<'\n';
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
