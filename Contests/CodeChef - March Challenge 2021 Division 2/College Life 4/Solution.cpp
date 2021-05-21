#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n,e,h,a,b,c;
    cin>>n>>e>>h>>a>>b>>c;
    ll r=min(n,min(h,e));
    ll ans=LLONG_MAX;
    for(ll z=0;z<=r;++z){
        ll p=(e-z)/2;
        ll q=(h-z)/3;
        ll cur_ans;
        if(p+q+z >= n){
            if(a>b){
                ll _q = min(n-z,q);
                cur_ans = z*c + b*_q + a*(n-z-_q);
                ans=min(ans,cur_ans);
            }
            else {
                ll _p = min(n-z,p);
                cur_ans = z*c + a*_p + b*(n-z-_p);
                ans=min(ans,cur_ans);
            }
        }
    }
    if(ans==LLONG_MAX)
        cout<<-1;
    else
        cout<<ans;
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
