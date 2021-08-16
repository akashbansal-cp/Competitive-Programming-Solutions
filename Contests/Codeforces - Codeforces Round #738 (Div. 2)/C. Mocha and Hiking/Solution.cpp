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
    // if(n==1){
    //     if(data[0]==0)cout<<"1 2"<<endl;
    //     else cout<<"2 1"<<endl;
    //     return;
    // }
    if(data[n-1]==0){
        for(int i=1;i<=n+1;++i)cout<<i<<' ';
        cout<<endl;
        return;
    }
    if(data[0]==1){
        cout<<n+1<<' ';
        for(int i=1;i<=n;++i)cout<<i<<' ';cout<<endl;
        return;
    }
    int p=-1;
    for(int i=0;i<n-1;++i){
        if(data[i]==0 && data[i+1]==1){
            p=i;
            break;
        }
    }
    if(p==-1){
        cout<<-1<<endl;return;
    }
    for(int i=1;i<=p+1;++i)cout<<i<<' ';
    cout<<n+1<<' ';
    for(int i=p+2;i<=n;++i)cout<<i<<' ';
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
