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
    int ax,ay,bx,by,fx,fy;
    bool ans = true;
    cin>>ax>>ay>>bx>>by>>fx>>fy;
    if(ax==bx && fx==ax && fy>min(ay,by) && fy<max(ay,by)){
        ans =false;
    }
    if(ay==by && fy==ay && fx>min(ax,bx) && fx<max(ax,bx)){
        ans =false;
    }
    int dx=abs(ax-bx);
    int dy=abs(ay-by);
    if(ans)cout<<dx+dy<<"\n";
    else cout<<dx+dy+2<<"\n";
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
