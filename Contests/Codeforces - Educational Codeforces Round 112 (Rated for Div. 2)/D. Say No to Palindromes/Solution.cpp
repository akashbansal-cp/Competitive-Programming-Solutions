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
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int m1=0,m2=1,m3=2;
    int m = ceil((double)n/3);
    string a="abc",b="acb",c="bac",d="bca",e="cab",f="cba";
    vector<string> l(6,"");
    for(int i=0;i<m;++i){
        l[0]+=a;
        l[1]+=b;
        l[2]+=c;
        l[3]+=d;
        l[4]+=e;
        l[5]+=f;
    }
    vector<vector<int>> data(6,vector<int>(n+1,0));
    for(int i=1;i<=n;++i){
        for(int j=0;j<6;++j){
            data[j][i]=data[j][i-1];
            if(l[j][i-1]==s[i-1])data[j][i]++;
        }
    }
    int x,y;
    for(int i=0;i<q;++i){
        cin>>x>>y;
        --x;
        int p=0;
        for(int j=0;j<6;++j)p=max(p,data[j][y]-data[j][x]);
        cout<<y-x-p<<endl;
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
