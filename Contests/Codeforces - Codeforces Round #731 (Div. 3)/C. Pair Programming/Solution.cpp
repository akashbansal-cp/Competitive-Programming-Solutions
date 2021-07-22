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
    int k,n,m;
    cin>>k>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int> b(m);
    for(int i=0;i<m;++i)cin>>b[i];
    vector<int> ans(n+m);
    int p1=0,p2=0;
    bool _ans = true;
    for(int i=0;i<n+m;++i){
        if(p1<n && a[p1]==0){
            ans[i]=0;
            ++p1,++k;
        }
        else if(p2<m && b[p2]==0){
            ans[i]==0;
            ++p2,++k;
        }
        else{
            if(p1<n && a[p1]<=k){
                ans[i]=a[p1];
                ++p1;
            }
            else if(p2<m && b[p2]<=k){
                ans[i]=b[p2];
                ++p2;
            }
            else{
                _ans=false;
                break;
            }
        }
    }
    if(_ans==false)cout<<-1<<endl;
    else{
        for(int i=0;i<n+m;++i)cout<<ans[i]<<' ';
        cout<<endl;
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
