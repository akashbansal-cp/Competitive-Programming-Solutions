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
    vector<int> odd;
    vector<int> even;
    int temp;
    for(int i=0;i<n;++i){
        cin>>temp;
        if(temp%2==0)even.push_back(temp);
        else odd.push_back(temp);
    }
    for(int i=0;i<odd.size();++i)cout<<odd[i]<<' ';
    for(int i=0;i<even.size();++i)cout<<even[i]<<' ';
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
