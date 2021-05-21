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
    int k;cin>>k;
    vector<int> div;
    for(int i=1;i<=100;++i){
        if(100%i==0)div.push_back(i);
    }
    int ans=100;
    for(int i=0;i<div.size();++i){
        if(k%div[i]==0 && (100-k)%div[i]==0){
            ans=min(ans,100/div[i]);
        }
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
