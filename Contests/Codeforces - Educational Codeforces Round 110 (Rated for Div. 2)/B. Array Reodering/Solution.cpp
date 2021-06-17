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
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int p=0;
    vector<int> odd;
    for(int i=0;i<n;++i){
        if(data[i]%2==0)++p;
        else odd.push_back(data[i]);
    }
    // cout<<p<<' ';
    p*=(n+n-p-1);
    p/=2;
    // cout<<p<<endl;
    for(int i=0;i<odd.size();++i){
        for(int j=i+1;j<odd.size();++j){
            if(__gcd(odd[i],odd[j])!=1)p++;
        }
    }
    cout<<p<<endl;
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
