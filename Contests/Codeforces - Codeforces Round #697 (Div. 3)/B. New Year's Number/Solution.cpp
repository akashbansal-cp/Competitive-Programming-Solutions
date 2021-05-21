#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    long long m=n/2020;
    n%=2020;
    if(n<=m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
