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
    vector<int> data(2*n);
    for(int i=0;i<2*n;++i)cin>>data[i];
    sort(data.begin(),data.end());
    vector<int> ans;
    for(int i=0;i<n;++i){
        ans.push_back(data[i]);
        ans.push_back(data[n+i]);
    }
    for(int e:ans)cout<<e<<' ';
    cout<<endl;
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
