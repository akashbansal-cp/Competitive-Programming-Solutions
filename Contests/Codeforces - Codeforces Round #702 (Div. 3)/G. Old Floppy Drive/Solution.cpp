#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i)
        cin >> arr[i];
    ll tmp;
    ll sum = 0;
    map<ll, ll> data;
    tmp = INT_MAX;
    for (ll i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (data[sum] == 0)
            data[sum] = i + 1;
    }
    vector<pair<ll, ll>> d;
    for (pair<const ll, ll> &e : data)
    {
        d.push_back({e.first,e.second-1});
    }
    for(ll i=d.size()-1;i>=0;--i){
        tmp = min(tmp, d[i].second);
        d[i].second=tmp;
    }
    for (ll i = 0; i < m; ++i)
    {
        ll ans = 0;
        cin >> tmp;
        if (d.back().first <= 0)
        {
            if (tmp > d.back().first)
            {
                cout << -1 << ' ';
                continue;
            }
        }
        else
        {
            if (tmp > d.back().first)
            {
                if (sum <= 0)
                {
                    cout << -1 << ' ';
                    continue;
                }
                else
                {
                    ll temp = tmp - d.back().first;
                    --temp;
                    ans = temp / sum;
                    ++ans;
                    tmp -= (ans * sum);
                    ans *= n;
                }
            }
        }
        ll x = 0, y = d.size() - 1;
        while (y - x > 1)
        {
            if (d[(x + y) / 2].first >= tmp)
                y = (x + y) / 2;
            else
                x = (x + y) / 2;
        }
        if (d[x].first >= tmp)
            cout << ans+d[x].second ;
        else
            cout << ans+d[y].second;
        cout << ' ';
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
