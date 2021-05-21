#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll a,x,y;
    cin>>a>>y>>x;
    ll lit=a*x+1;
    ll unlit=0;
    if(a>=y){
        unlit = (a-y)*x;
        ++unlit;
    }
    lit-=unlit;
    cout<<lit<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
