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
bool getcorr(vector<int>& data,int i,int sum,int s,int e){
    if(sum == data[i])return true;
    if(s >= e)return false;
    if(s==i)return getcorr(data,i,sum,s+1,e);
    return (getcorr(data,i,sum,s+1,e)) || (getcorr(data,i,sum+data[s],s+1,e)) || (getcorr(data,i,sum-data[s],s+1,e));
}
bool get(vector<int>& data){
    int n=data.size();
    for(int i=0;i<n;++i){
        if(getcorr(data,i,0,0,n)==true)return true;
    }
    return false;
}
void solve()
{
    int n;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    bool p=get(data);
    if(p)cout<<"YES\n";
    else cout<<"NO\n";
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
