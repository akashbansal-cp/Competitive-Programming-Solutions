#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll power(ll x,ll y){
    if(y==0)return 1;
    if(y==1)return x;
    ll ans;
    if(y%2==0){
        ans=power(x,y/2);
        ans*=ans;
        ans%=MOD;
    }
    else{
        ans=power(x,y/2);
        ans*=ans;
        ans%=MOD;
        ans*=x;
        ans%=MOD;
    }
    return ans;
}
void solve(int t)
{
    cout<<"Case #"<<t<<": ";
    string  s;
    int n,k;
    cin>>n>>k>>s;
    int md=(n+1)/2;
    ll ans=0;
    for(int i=0;i<md;++i){
        if(s[i]>s[n-1-i])swap(s[i],s[n-1-i]);
    }
    char lmt='a'+k-1;
    for(int i=0;i<md;++i){
        if(s[i]<=lmt){
            ans+=(power((ll)k,(ll)md-i-1)*(s[i]-'a'));
        }
        else{
            ans+=power((ll)k,(ll)md-i);
            cout<<ans<<endl;
            return;
        }
    }
    for(int i=0;i<md;++i){
        if(s[i]!=s[n-i-1]){
            ++ans;
            break;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)
        solve(i);
    return 0;
}
