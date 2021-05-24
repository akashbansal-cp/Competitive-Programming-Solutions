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
    int g,p,ans=0;
    cin>>g>>p;
    vector<int> data(10);
    for(int i=0;i<10;++i)cin>>data[i];
    for(int i=g;i<10;++i)ans+=data[i];
    int m=ans/p,n=ans%p;
    cout<<m+1<<' ';
    ans+=(data[g-1]-1);
    m=ans/p;n=ans%p;
    cout<<m+1<<' ';
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
