#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll update(ll p,ll n){
    ll x=0;
    for(x=0;;++x){
        if(n*pow((ll)2,x) >= p)break;
    }
    ll b=pow(2,x-1);
    if(p==(n*b)+1)p=n*b;
    else{
        p=p-(n*b)-1;
    }
    return p;
}
void solve()    
{
    freopen("cowcode.in","r",stdin);
    freopen("cowcode.out","w",stdout);
    string s;cin>>s;
    ll p;cin>>p;
    ll n=s.length();
    while(p > n){
        p=update(p,n);
    }
    cout<<s[p-1];
}
int main()
{
    fio
        solve();
    return 0;
}
