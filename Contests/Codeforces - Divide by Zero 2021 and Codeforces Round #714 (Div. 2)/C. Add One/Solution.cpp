#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve(vector<ll>& arr)
{
    string  n;
    int m;
    cin>>n>>m;
    ll ans=0;
    for(char c:n){
        int p=c-'0';
        ans+=arr[p+m];
        ans%=MOD;
    }
    cout<<ans<<'\n';
}
int main()
{
    fio
    vector<ll> arr(200020,0);
    arr[9]=1;
    for(ll i=0;i<200020;++i){
        // arr[i]%=MOD;
        if(i+9 < 200020){
            arr[i+9]+=arr[i];
            arr[i+9]%=MOD;
        }
        if(i+10 < 200020){
            arr[i+10]+=arr[i];
            arr[i+10]%=MOD;
        }
    }
    int d=1;
    int x;
    for(int i=0;i<200020;++i){
        x=arr[i];
        arr[i]=d;
        d+=x;
        d%=MOD;
    }
    int t;
    cin >> t;
    while (t--)
        solve(arr);
    return 0;
}
