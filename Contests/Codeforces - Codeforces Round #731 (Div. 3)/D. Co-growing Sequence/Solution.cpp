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
    vector<int> b(n);
    for(int i=1;i<n;++i){
        // cout<<a[i]<<a[i-1]<<(a[i]&a[i-1])<<endl;
        if((a[i]&a[i-1])==a[i-1]){
            b[i]=0;
        }
        else{
            // cout<<i<<' '<<a[i-1]<<endl;
            int x=a[i],y=a[i-1];
            b[i]=0;
            for(int p=29;p>=0;--p){
                if(y>=pow(2,p) && x<pow(2,p)){
                    b[i]+=pow(2,p);
                }
                if(y>=pow(2,p))y-=pow(2,p);
                if(x>=pow(2,p))x-=pow(2,p);
            }
            a[i]=(a[i]^b[i]);
        }
    }
    for(int i=0;i<n;++i)cout<<b[i]<<' ';cout<<endl;
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
