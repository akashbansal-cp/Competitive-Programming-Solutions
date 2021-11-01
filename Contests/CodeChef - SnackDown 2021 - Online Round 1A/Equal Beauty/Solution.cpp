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
    vector<int> d(n);
    for(int i=0;i<n;++i)cin>>d[i];
    sort(d.begin(),d.end());
    if(n==2){
        cout<<0<<endl;
        return;
    }
    if(n==3){
        cout<<min(d[1]-d[0],d[2]-d[1])<<endl;
        return;
    }
    multiset<int> data;
    int ans = INT_MAX;
    for(int i=1;i<n-1;++i){
        int req=d[n-1]-d[i]+d[0];
        if(data.empty()==false){
            auto itr=data.upper_bound(req);
            if(itr==data.begin())
                ans=min(ans,(*itr)-req);
            else{
                if(itr!=data.end())
                    ans=min(ans,(*itr)-req);
                --itr;
                ans=min(ans,req-(*itr));
            }
        }
        data.insert(d[i]);
        ans=min(ans,abs(req-d[i+1]));
        // cout<<'~'<<ans<<endl;
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
