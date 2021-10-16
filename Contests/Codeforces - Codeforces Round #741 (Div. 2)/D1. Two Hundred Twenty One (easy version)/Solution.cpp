#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout << setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> seg(2 * n);
    vector<int> seg2(2 * n);
    for (int i = 0; i < n; ++i)
    {
        if(i%2==0){
            seg[i + n] = s[i] == '+' ? 1 : -1;
            seg2[i + n] = s[i] == '+' ? -1 : 1;
        }
        else{
            seg[i + n] = s[i] == '+' ? -1 : 1;
            seg2[i + n] = s[i] == '+' ? 1 : -1;
        }
    }
    for (int i = n - 1; i > 0; --i)
    {
        seg[i] = seg[i * 2] + seg[(i * 2) + 1];
    }
    for (int i = n - 1; i > 0; --i)
    {
        seg2[i] = seg2[i * 2] + seg2[(i * 2) + 1];
    }
    for(int e:seg)cout<<e<<' ';cout<<endl;
    for(int e:seg2)cout<<e<<' ';cout<<endl;
    int l, r;
    for (int i = 0; i < q; ++i)
    {
        cin >> l >> r;
        int res = 0;
        bool m = l%2==0 ? true : false;
        for (l += n, r += n; l < r; l >>= 1, r >>= 1)
        {
            if(m){
                if (l & 1)
                    res += seg[l++];
                if (r & 1)
                    res += seg[--r];
            }
            else{
                if (l & 1)
                    res += seg2[l++];
                if (r & 1)
                    res += seg2[--r];
            }
        }
        cout << abs(res) << endl;
    }
}
int main()
{
    fio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
