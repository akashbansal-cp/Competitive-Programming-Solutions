#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k1,k2,w,b;
    cin>>n>>k1>>k2>>w>>b;
    int max_w = abs(k1-k2)/2;
    max_w+=min(k1,k2);
    int max_b=abs(k1-k2)/2;
    max_b+=min(n-k1,n-k2);
    if(w<=max_w &&  b<=max_b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
