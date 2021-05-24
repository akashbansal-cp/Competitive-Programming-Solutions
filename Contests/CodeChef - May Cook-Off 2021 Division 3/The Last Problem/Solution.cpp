#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll find_dis(int x,int y){
    ll _y=y+(x-1);
    --_y;
    _y*=(_y+1);
    _y/=2;
    ++_y;
    _y+=(x-1);
    return _y;
}
void solve()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll ans=0;
    while(x1 < x2){
        ans+=find_dis(x1,y1);
        ++x1;
    }
    while(y1 < y2){
        ans+=find_dis(x1,y1);
        ++y1;
    }
    cout<<ans+find_dis(x2,y2)<<endl;
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

x y
x-1  y-1
x-2  y-2
.
.
.
x-(x-1)    y-(x-1)