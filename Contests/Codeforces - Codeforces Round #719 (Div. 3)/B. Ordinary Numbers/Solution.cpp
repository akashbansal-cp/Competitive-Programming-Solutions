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
    int p=0,t=n;
    while(t!=0){
        ++p;
        t/=10;
    }
    int x=0;
    for(int i=0;i<p;++i){
        x*=10;
        x+=1;
    }
    int m=0,tx=x;
    while(tx<=n){
        ++m;
        if(tx==n)break;
        tx+=x;
    }
    m+=((p-1)*9);
    cout<<m<<endl;
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
