#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
bool checkFeasible(ll _p1,ll _p2,ll x,ll y,ll a,ll b){
    if(_p1<0 || _p2<0)return false;
    if((a*_p1 + b*_p2 <= x) && (b*_p1 + a*_p2 <= y)){
        return true;
    }
    return false;
}

void solve()
{
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    if(a==b){
        cout<<min(x/a,y/b)<<endl;
        return;
    }
    ll ans = max((ll)0,max(min(x/a,y/b),min(x/b,y/a)));
    double p1=a*x - b*y;
    double p2=a*y - b*x;
    double z =a*a - b*b;
    p1/=z,p2/=z;
    ll _p1,_p2;
    _p1 = ceil(p1), _p2 = ceil(p2);
    if(checkFeasible(_p1,_p2,x,y,a,b)==true){
        ans = max(ans,_p1+_p2);
    }
    _p1 = ceil(p1), _p2 = floor(p2);
    if(checkFeasible(_p1,_p2,x,y,a,b)==true){
        ans = max(ans,_p1+_p2);
    }
    _p1 = floor(p1), _p2 = ceil(p2);
    if(checkFeasible(_p1,_p2,x,y,a,b)==true){
        ans = max(ans,_p1+_p2);
    }
    _p1 = floor(p1), _p2 = floor(p2);
    if(checkFeasible(_p1,_p2,x,y,a,b)==true){
        ans = max(ans,_p1+_p2);
    }
    cout<<ans<<endl;

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
