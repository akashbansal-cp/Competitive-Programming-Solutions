#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    vector<int> ps(n,0);
    ps[0]=s[0]-'0';
    for(int i=0;i<n;++i)ps[i]=ps[i-1]+s[i]-'0';
    vector<int> ms(n,-1);
    vector<int> nz(n,-1);
    int p=-1;
    for(int i=n-1;i>=0;--i){
        if(s[i]!='0')p=i;
        nz[i]=p;
    }
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
