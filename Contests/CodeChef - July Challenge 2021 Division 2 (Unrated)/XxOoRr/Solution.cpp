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
    int n,k;
    cin>>n>>k;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<int> occ(31,0);
    for(int i=0;i<n;++i){
        for(int j=30;j>=0;--j){
            if(data[i] >= pow(2,j)){
                data[i]-=pow(2,j);
                occ[j]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i<31;++i){
        ans+=(occ[i]/k);
        if(occ[i]%k!=0)++ans;
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
