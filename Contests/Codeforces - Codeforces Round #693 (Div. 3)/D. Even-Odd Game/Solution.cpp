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
    ll n;cin>>n
    vector<ll> odd;
    vector<ll> even;
    ll odd_sum=0,even_sum=0;
    ll temp;
    for(ll i=0;i<n;++i){
        cin>>temp;
        if(temp%2==0){
            even.push_back(temp);
            even_sum+=temp;
        }
        else{
            odd.push_back(temp);
            odd_sum+=temp;
        } 
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    if(odd_sum==even_sum){
        
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
