#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    if(a<b)
        swap(a,b);
    bool t=true;
    int ans=0;
    while(a<=n && b<=n){
        if(t)
            b+=a;
        else
            a+=b;
        t=!t;
        ++ans;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
