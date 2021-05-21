#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    vector<int> d(3);
    for (int i = 0; i < 3; ++i)
        cin >> d[i];
    sort(d.begin(), d.end());
    if (d[0] * d[1] == d[2])
    {
        cout << "YES" << endl;
        cout << d[0] << ' ' << d[1] << ' ' << d[2] << endl;
    }
    else
    {
        if (d[0] == 0 && d[1] == 0)
        {
            cout << "YES" << endl;
            cout << d[0] << ' ' << d[2] << ' ' << d[1] << endl;
        }
        else
            cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
