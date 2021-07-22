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
    int n,m;
    cin>>n>>m;
    vector<string> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<string> da(n-1);
    for(int i=0;i<n-1;++i)cin>>da[i];
    for(int i=0;i<m;++i){
        vector<int> temp(26,0);
        for(int j=0;j<n;++j)temp[data[j][i]-'a']++;
        for(int j=0;j<n-1;++j)temp[da[j][i]-'a']--;
        for(int j=0;j<26;++j)if(temp[j]==1)cout<<(char)('a'+j);
    }
    
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
