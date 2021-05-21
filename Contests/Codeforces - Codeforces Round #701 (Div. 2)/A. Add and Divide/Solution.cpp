#include <bits/stdc++.h>
using namespace std;
int findans(int a, int b)
{
    int ans = 0;
    while (a != 0)
    {
        a /= b;
        ++ans;
    }
    return ans;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = INT_MAX;
    int extra=0;
    if (b == 1)
    {
        ++b;
        extra = 1;
    }
    while (true)
    {
        int x = findans(a, b);
        if (x + extra <= ans){
            ans = x + extra;
            // cout<<x<<' '<<extra<<endl;
        }
        else
            break;
        ++b;
        ++extra;
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
