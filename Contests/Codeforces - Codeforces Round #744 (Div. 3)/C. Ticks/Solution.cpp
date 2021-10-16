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
    int n,m,k;cin>>n>>m>>k;
    vector<string> data(n);
    for(int i=0;i<n;++i){
        cin>>data[i];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(data[i][j]=='*' || data[i][j]=='$'){
                // a possible middle character
                int l=0;
                for(int z=1;z<=k && i-z>=0 && j-z >= 0 && j+z < m;++z){
                    if((data[i-z][j-z]=='*' || data[i-z][j-z]=='$') && (data[i-z][j+z]=='*' || data[i-z][j+z]=='$')){
                        ++l;
                    }
                }
                if(l >= k){
                    data[i][j]='$';
                    int z=1;
                    while(i-z>=0 && j-z >= 0 && j+z < m){
                        if((data[i-z][j-z]=='*' || data[i-z][j-z]=='$') && (data[i-z][j+z]=='*' || data[i-z][j+z]=='$'))
                            data[i-z][j-z]='$',data[i-z][j+z]='$';
                        else break;
                        ++z;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(data[i][j]=='*'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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
