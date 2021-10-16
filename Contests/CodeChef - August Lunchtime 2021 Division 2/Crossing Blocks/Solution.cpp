#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int ans = 0;
    // int x=0;
    // while(data[x+1]==data[x])++x;
    for(int i=n-1;i>=0;){
        // cout<<'~'<<i<<endl;
        int mx=data[i];
        for(int j=i-1;j>=0;--j){
            // cout<<'!'<<j<<endl;
            mx=max(mx,data[j]);
            // cout<<' '<<mx<<endl;
            if(mx!=data[i]){
                i=j;
                // cout<<'>'<<j<<' '<<mx<<' '<<data[j]<<endl;
                ++ans;
                if(i==0){
                    cout<<ans<<endl;
                    return;
                }
                break;
            }
            if(j==0){
                if(data[i]==data[j])
                    cout<<ans+1<<endl;
                else cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
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
