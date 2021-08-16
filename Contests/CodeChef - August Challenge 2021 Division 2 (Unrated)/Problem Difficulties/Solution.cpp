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
    map<int,int> d;
    int a;
    for(int i=0;i<4;++i){
        cin>>a;
        d[a]++;
    }
    for(auto e:d){
        if(e.second==4){
            cout<<"0"<<endl;return;
        }
        if(e.second==3){
            cout<<1<<endl;return;
        }
    }
    cout<<2<<endl;

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
