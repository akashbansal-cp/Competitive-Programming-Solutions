#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a1,b1,c1,a2,b2,c2,n;
    cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
    if((a1 > b1 && a1 < c1) || (a1<b1 && a1>c1)){cout<<"NO"<<endl;return;}
    if((a2 > b2 && a2 < c2) || (a2<b2 && a2>c2)){cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;

}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
