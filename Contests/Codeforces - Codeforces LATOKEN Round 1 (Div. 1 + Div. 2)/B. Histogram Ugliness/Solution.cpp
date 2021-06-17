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
    int n;
    cin>>n;
    vector<ll> data(n+2);
    data[0]=0,data[n+1]=0;
    for(int i=0;i<n;++i)cin>>data[i+1];
    ll ugli=0;
    for(int i=1;i<n+2;++i){
        ugli+=(abs(data[i]-data[i-1]));
    }
    for(int i=1;i<n+1;++i){
        int p=min(data[i]-data[i-1],data[i]-data[i+1]);
        if(p>0){
            ugli-=p;
            data[i]-=p;
        }
    }
    // for(auto e:data)cout<<e<<' ';cout<<endl;
    cout<<ugli<<endl;
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
