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
    int n,q;
    cin>>n>>q;
    vector<int> color(51,-1);
    int p,temp;
    for(int i=0;i<n;++i){
        cin>>temp;
        if(color[temp]==-1){
            color[temp]=i+1;
        }
    }
    for(int i=0;i<q;++i){
        cin>>temp;
        p=color[temp];
        cout<<p<<' ';
        color[temp]=1;
        for(int j=1;j<51;++j){
            if(j!=temp && color[j]!=-1 && color[j]<p)++color[j];
        }
    }
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
