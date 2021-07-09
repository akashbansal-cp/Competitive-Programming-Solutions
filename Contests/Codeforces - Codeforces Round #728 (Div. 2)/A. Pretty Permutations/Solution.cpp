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
    vector<int> data(n);
    for(int i=1;i<=n;++i)data[i-1]=i;
    for(int i=1;i<n;i+=2)swap(data[i],data[i-1]);
    if(n%2==1)swap(data[n-1],data[n-2]);
    for(int e:data)cout<<e<<' ';cout<<endl;
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
