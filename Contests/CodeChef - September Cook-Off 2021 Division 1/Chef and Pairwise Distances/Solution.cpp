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
    if(n>4){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES\n";
    for(int i=0;i<n;++i){
        if(i==0)cout<<-d[0]<<" 0\n";
        if(i==1)cout<<"0 "<<d[1]<<'\n';
        if(i==2)cout<<d[2]<<" 0\n";
        if(i==3)cout<<"0 "<<-d[3]<<'\n';
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
