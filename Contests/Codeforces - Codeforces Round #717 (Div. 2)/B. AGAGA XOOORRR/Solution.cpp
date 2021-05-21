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
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<int> ini(n);
    ini[0]=data[0];
    for(int i=1;i<n;++i)ini[i]=(ini[i-1]^data[i]);
    vector<int> fin(n);
    fin[n-1]=data[n-1];
    for(int i=n-2;i>=0;--i)fin[i]=(fin[i+1]^data[i]);
    //check for two
    for(int i=0;i<n-1;++i){
        if(ini[i]==fin[i+1]){
            cout<<"YES"<<endl;return;
        }
    }
    //check for three
    for(int i=0;i<n;++i){
        if(i>=1){
            if(ini[i]==0){
                
            }
        }
    }
    cout<<"NO"<<endl;return;
    
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
