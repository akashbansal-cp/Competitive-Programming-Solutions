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
    int n,k;
    cin>>n>>k;
    vector<ll> data(n);
    for(int i=0;i<n;++i){
        cin>>data[i];
    }
    if(k==1 || k==2){
        vector<ll> f_e(n);
        ll sum=0,min_sum=0;
        for(int i=n-1;i>=0;--i){
            sum+=data[i];
            f_e[i]=sum-min_sum;
            min_sum=min(sum,min_sum);
        }
        vector<ll> f_s(n);
        sum=0,min_sum=0;
        for(int i=0;i<n;++i){
            sum+=data[i];
            f_s[i]=sum-min_sum;
            min_sum=min(sum,min_sum);
        }
        for(int i=1;i<n;++i){
            f_s[i]=max(f_s[i],f_s[i-1]);
        }
        for(int i=n-2;i>=0;--i){
            f_e[i]=max(f_e[i],f_e[i+1]);
        }
        // for(int e:f_s)cout<<e<<' ';cout<<endl;
        // for(int e:f_e)cout<<e<<' ';cout<<endl;
        if(k==1){
            cout<<f_s[n-1]<<endl;
        }
        else if(k==2){
            ll m=LLONG_MIN;
            for(int i=0;i<n-1;++i){
                m=max(m,f_s[i]+(f_e[i+1]*2));
            }
            cout<<m<<endl;
        }
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
