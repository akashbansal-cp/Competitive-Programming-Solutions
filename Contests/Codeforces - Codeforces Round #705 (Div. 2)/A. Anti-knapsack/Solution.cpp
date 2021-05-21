#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int ans=0,m=0;
    m=k/2;
    ans=m;
    ans+=(n-k);
    cout<<ans<<endl;
    for(int i=k+1;i<=n;++i)
        cout<<i<<' ';
    if(k%2==0){
        for(int i=m;i<k;++i)
            cout<<i<<' ';
    }
    else{
        for(int i=m+1;i<k;++i)
            cout<<i<<' ';
    }
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
