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
    vector<int> data(n+1,0);
    for(int i=1;true;++i){
        int p=0,q=pow(2,i-1);
        for(int j=q;j<n+1;j+=q){
            data[j]=i;
            ++p;
        }
        if(p==1)break;
    }   
    for(int i=1;i<n+1;++i)cout<<data[i]<<' ';
    cout<<endl;
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
