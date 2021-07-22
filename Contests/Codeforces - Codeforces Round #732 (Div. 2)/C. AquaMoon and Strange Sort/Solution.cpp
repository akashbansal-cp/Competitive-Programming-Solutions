#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> data(n);
    for(int i=0;i<n;++i){
        cin>>data[i].first;
        data[i].second=i;
    }
    sort(data.begin(),data.end());
    vector<int> p(100001,0);
    for(int i=0;i<n;++i){
        p[data[i].first]+=(abs(i-data[i].second));
    }
    for(int i=0;i<=100000;++i){
        if(p[i]%2!=0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()
{
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
