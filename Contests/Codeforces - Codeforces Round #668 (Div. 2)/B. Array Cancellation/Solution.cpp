#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> data(n);
    int x = -1;
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
        if (data[i] > 0)
            x = i;
    }
    int j=0;
    ll ans = 0;
    ll ans2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (data[i] > 0)
        {
            j=max(j,i+1);
            while (j < n && data[i] > 0)
            {
                if (data[j] < 0)
                {
                    if (data[i] > abs(data[j]))
                    {
                        data[i] += data[j];
                        data[j] = 0;
                    }
                    else
                    {
                        data[j] += data[i];
                        data[i] = 0;
                    }
                }
                if(data[i]==0)
                    break;
                ++j;
            }
            data[i] = 0;
        }
        if (i == x)
        {
            while (i < n)
            {
                ans2 = ans2 + (ll)abs(data[i]);
                data[i] = 0;
                ++i;
            }
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        ans += (ll)data[i];
    }
    ans *= -1;
    cout << ans + ans2 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
