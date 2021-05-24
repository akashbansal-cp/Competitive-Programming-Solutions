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
    int ans=0;
    int n,k;
    cin>>n>>k;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    for(int i=0;i<k;++i){
        map<int,int> d;
        for(int j=i;j<n;j+=k){
            d[data[j]]++;
        }
        int s=0;
        int m=0;
        for(auto e:d){
            s+=e.second;
            m=max(m,e.second);
        }
        ans+=(s-m);
    }
    cout<<ans<<endl;
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
