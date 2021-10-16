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
    string s;
    vector<int> orig;
    int x=1;
    for(int i=0;i<n;++i){
        cin>>s;
        for(int j=0;j<n;++j,++x){
            if(s[j]=='#'){
                orig.push_back(x);
            }
        }
    }
    for(int i=1;i<orig.size();++i)orig[i]-=orig[0];
    orig[0]=0;
    vector<string> d(n);
    for(int i=0;i<n;++i)cin>>d[i];
    vector<int> d1,d2,d3,d4;
    int a1=1,a2=1,a3=1,a4=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j,++a1,++a2,++a3,++a4){
            if(d[i][j]=='#')d1.push_back(a1);
            if(d[j][n-1-i]=='#')d2.push_back(a2);
            if(d[n-1-i][n-1-j]=='#')d3.push_back(a3);
            if(d[n-1-j][i]=='#')d4.push_back(a4);
        }
    }
    for(int i=1;i<d1.size();++i)d1[i]-=d1[0];d1[0]=0;
    for(int i=1;i<d2.size();++i)d2[i]-=d2[0];d2[0]=0;
    for(int i=1;i<d3.size();++i)d3[i]-=d3[0];d3[0]=0;
    for(int i=1;i<d4.size();++i)d4[i]-=d4[0];d4[0]=0;
    if(d1==orig || d2==orig || d3==orig || d4==orig)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
