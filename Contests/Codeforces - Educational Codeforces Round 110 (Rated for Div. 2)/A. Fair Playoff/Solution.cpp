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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x,y;
    x=max(a,b),y=max(c,d);
    if(x<y)swap(x,y);
    vector<int> p={a,b,c,d};
    sort(p.begin(),p.end());
    // cout<<x<<' '<<y<<endl;
    // cout<<p[2]<<' '<<p[3]<<endl;
    if(p[2]==y && p[3]==x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
