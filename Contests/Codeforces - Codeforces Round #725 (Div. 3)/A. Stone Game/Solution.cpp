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
    int p=0,q=0;
    for(int i=1;i<n;++i){
        if(data[i]<data[p])p=i;
        if(data[i]>data[q])q=i;
    }
    if(p>q)swap(p,q);
    int ans=min(q+1,n-p);
    ans=min(ans,n-q+p+1);
    // int ans=min(min(max(p.+1,q+1),max(n-p+1,n-q+1)),n-abs(p-q)+1);
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
