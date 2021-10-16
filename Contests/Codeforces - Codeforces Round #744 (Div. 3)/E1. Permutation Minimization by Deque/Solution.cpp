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
    vector<int> t(n);
    for(int i=0;i<n;++i)cin>>t[i];
    vector<int> p;
    p.push_back(t[0]);
    int z=t[0];
    t[0]=-1;
    for(int i=1;i<n;++i){
        if(t[i]< z){
            p.push_back(t[i]);
            z=t[i];
            t[i]=-1;
        }
    }
    reverse(p.begin(),p.end());
    for(int e:t){
        if(e!=-1)p.push_back(e);
    }
    for(int e:p)cout<<e<<' ';
    cout<<endl;
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
