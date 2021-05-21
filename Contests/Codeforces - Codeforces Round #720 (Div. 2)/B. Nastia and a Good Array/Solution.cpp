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
    int n;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    if(n==1){cout<<0<<endl;return;}
    vector<vector<int>> dp;
    for(int i=2;i<n;i+=2){
        if(data[i]<data[i-1]){
            dp.push_back({i,i+1,1086218491,data[i]});
            data[i-1]=1086218491;
        }
        else{
            dp.push_back({i,i+1,data[i],data[i-1]});
            swap(data[i-1],data[i]);
            dp.push_back({i,i+1,1086218491,data[i]});
            data[i-1]=1086218491;
        }
    }
    if(n%2==0){
        if(data[n-1]>data[n-2]){
            dp.push_back({n-1,n,data[n-2],1086218491});
            data[n-1]=1086218491;
        }
        else{
            dp.push_back({n-1,n,data[n-1],data[n-2]});
            swap(data[n-1],data[n-2]);
            dp.push_back({n-1,n,data[n-2],1086218491});
            data[n-1]=1086218491;
        }
    }
    cout<<dp.size()<<endl;
    for(auto e:dp){
        cout<<e[0]<<' '<<e[1]<<' '<<e[2]<<' '<<e[3]<<endl;
    }
    // for(int e:data)cout<<e<<' ';
    // cout<<endl;
    // for(int i=1;i<n;++i){
    //     cout<<__gcd(data[i],data[i-1])<<' ';
    // }
    // cout<<endl;
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
