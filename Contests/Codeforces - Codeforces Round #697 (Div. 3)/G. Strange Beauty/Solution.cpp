#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> freq(200001, 0);
    int temp;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        freq[temp]++;
    }
    vector<int> dp(200001, 0);
    for (int i = 1; i < 200001; ++i)
    {
        if (freq[i] != 0)
        {
            int k = 0;
            int j = 1;
            while (j * j <= i)
            { 
                if (i % j == 0 && freq[j] != 0)
                {
                    k = max(k, freq[i] + dp[j]);
                }
                if (i % (i / j) == 0 && freq[i / j] != 0)
                {
                    k = max(k, freq[i] + dp[i / j]);
                }
                ++j;
            }
            dp[i] = k;
        }
    }
    int ans = 0;
    for (int i = 0; i < 200001; ++i)
    {
        ans = max(ans, dp[i]);
    }
    cout << n - ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
