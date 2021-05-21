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
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    ll sum=0;
    for(int i=0;i<n;++i)sum+=a[i]*b[i];
    ll ans=sum;
    //O(n)
    for(int i=0;i<n;++i){
      ll new_sum=sum;
      // single-center
      int x=i-1,y=i+1;
      //O(n)
      while(x>=0 && y<n){
        //O(1)
        new_sum-=(a[x]*b[x]);
        new_sum-=(a[y]*b[y]);
        new_sum+=(a[x]*b[y]);
        new_sum+=(a[y]*b[x]);
        ans=max(ans,new_sum);
        --x,++y;
      }
      // no-center
      new_sum=sum;
      x=i,y=i+1;
      while(x>=0 && y<n){
        new_sum-=(a[x]*b[x]);
        new_sum-=(a[y]*b[y]);
        new_sum+=(a[x]*b[y]);
        new_sum+=(a[y]*b[x]);
        ans=max(ans,new_sum);
        --x,++y;
      }
    }
  cout<<ans<<endl;
}
int main()
{
    fio
    int t=1;
    while (t--)
        solve();
    return 0;
}
