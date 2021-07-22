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
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans = a[0];
    for(int i=1;i<n;++i)ans=__gcd(ans,a[i]);
    int p=ceil(log2((double)n)),z;
    ++p;
    vector<vector<int>> gcd(n,vector<int> (p,-1));
    for(int i=0;i<n;++i)gcd[i][0]=a[i];
    for(int j=1;j<p;++j){
        for(int i=0;i<n;++i){
            z=i+pow(2,j-1);
            z%=n;
            gcd[i][j]=__gcd(gcd[i][j-1],gcd[z][j-1]);
        }
    }
    // cout<<p<<endl;
    // for(int j=0;j<p;++j){
    //     for(int i=0;i<n;++i)cout<<gcd[i][j]<<' ';
    //     cout<<endl;
    // }
    int mn = 0;
    for(int i=0;i<n;++i){
        for(z=p-1;z>=0;--z){
            if(gcd[i][z]!=ans)break;
        }
        // cout<<z<<endl;
        if(z!=-1){
            int steps  = pow(2,z);
            int g=gcd[i][z];
            int _i = i + pow(2,z);
            _i%=n;
            while(z != -1){
                
                if(__gcd(g,gcd[_i][z])!=ans){
                    g=__gcd(g,gcd[_i][z]);
                    steps  +=  pow(2,z);
                    _i=_i+pow(2,z);
                    _i%=n;
                }
                else 
                    --z;
            }
            mn=max(mn,steps);
        }
    }
    cout<<mn<<endl;
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
