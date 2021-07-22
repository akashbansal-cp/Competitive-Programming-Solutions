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
    vector<int>a(n);
    vector<int> b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=1;i<n;++i)a[i]+=a[i-1];
    for(int i=1;i<n;++i)b[i]+=b[i-1];
    if(b[n-(n/4)-1]-a[n-(n/4)-1] <= 0){
        cout<<0<<endl;return;
    }
    int ans=INT_MAX;
    for(int i=0;i<n;++i){
        // n+p % 4 == 0
        int p;
        int x=(3*n)-(4*i)-4;
        p=(n+x)-(n+x)/4;
        if(x>0 && (n+x)%4==0 && 100*x >= b[min(n-1,p-1)]-a[i])
            ans = min(ans,x);
        // n+p % 4 == 1
        ++x;
        p=(n+x)-(n+x)/4;
        if(x>0 && (n+x)%4==1 && 100*x >= b[min(n-1,p-1)]-a[i])
            ans=min(ans,x);
        // n+p % 4 == 2
        ++x;
        p=(n+x)-(n+x)/4;
        if(x>0 && (n+x)%4==2 && 100*x >= b[min(n-1,p-1)]-a[i])
            ans=min(ans,x);
        // n+p % 4 == 3
        ++x;
        p=(n+x)-(n+x)/4;
        if(x>0 && (n+x)%4==3 && 100*x >= b[min(n-1,p-1)]-a[i])
            ans=min(ans,x);
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
