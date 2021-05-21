#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    n*=2;
    --n;
    n=sqrt(n);
    --n;
    cout<<n/2<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
