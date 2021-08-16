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
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<int> b(31,0);
    for(int i=0;i<n;++i){
        int p=0,q=data[i];
        while(q!=0){    
            if(q&1){
                b[p]++;
            }
            q=q>>1;
            ++p;
        }
    }
    int y=0;
    for(int i=0;i<31;++i){
        if(b[i]==n)y+=pow(2,i);
    }
    for(int i=0;i<n;++i){
        data[i]=data[i]^y;
    }
    int x=0;
    for(int i=0;i<n;++i){
        x=x|data[i];
    }
    cout<<y<<' '<<x<<endl;
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
