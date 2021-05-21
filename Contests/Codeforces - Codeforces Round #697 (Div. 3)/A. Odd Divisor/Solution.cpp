#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    while(n>1 && n%2==0)
        n/=2;
    if(n%2==0 || n==1)
        cout<<"NO";
    else
        cout<<"YES";
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
