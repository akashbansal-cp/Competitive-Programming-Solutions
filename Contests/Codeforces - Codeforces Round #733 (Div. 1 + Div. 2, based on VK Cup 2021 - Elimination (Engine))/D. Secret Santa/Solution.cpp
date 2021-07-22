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
    vector<int> data(n+1);
    for(int i=1;i<=n;++i)cin>>data[i];
    vector<bool> found(n+1,false);
    vector<int> final(n+1,-1);
    int p=0;
    vector<vector<int>> d(n+1);
    for(int i=1;i<=n;++i){
        d[data[i]].push_back(i);
    }

    for(int i=1;i<=n;++i){
        if(found[data[i]]==false){
            final[i]=data[i];
            ++p;
            found[data[i]]=true;
        }
    }

    // for(int i=1;i<=n;++i)cout<<found[i]<<' ';cout<<endl;
    int x=1;
    for(int i=1;i<=n;++i){
        if(final[i]==-1){
            while(found[x]==true)++x;
            found[x]=true;
            final[i]=x;
        }
    }
    // validate
    for(int i=1;i<=n;++i){
        if(i==final[i]){
            int x=d[data[i]][0];
            if(x==i)d[data[i]][1];
            swap(final[i],final[x]);
        }
    }
    cout<<p<<endl;
    for(int i=1;i<=n;++i)cout<<final[i]<<' ';
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