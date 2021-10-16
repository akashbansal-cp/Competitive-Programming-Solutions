#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    map<int,vector<int>> d;
    int l=-1;
    for(int i=0;i<n;++i){
        d[data[i]].push_back(i);
    }
    vector<ll> p(d.size(),0);
    for(auto i:d){
        if(i.f!=l+1)break;
        else l++;
        for(int j=0;j<i.s.size()-1;++j){
            p[l]=p[l]+((i.s[j+1]-i.s[j])*(i.s[j+1]-i.s[j]-1))/2;
        }
        p[l]=p[l]+((i.s[0])*(i.s[0]+1))/2;
        p[l]=p[l]+((n-i.s[i.s.size()-1]-1)*(n-i.s[i.s.size()-1]))/2;
    }
    // l+1 does not exists in the given array
    for(int i=0;i<=l;++i)cout<<i<<' '<<p[i]<<endl;
    for(int i=l;i>=0;--i){
        p[i]-=p[i-1];
    }
    int m=0;
    for(int i=0;i<=l;++i){
        m+=p[i];
        if(m >= k){
            cout<<i<<endl;
            return;
        }
    }
    cout<<l+1<<endl;
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
