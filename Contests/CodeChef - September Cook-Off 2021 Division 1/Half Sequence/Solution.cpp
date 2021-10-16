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
    int k=ceil((double)n/2);
    vector<int> d;
    int p;
    for(int i=0;i<n;++i){
        cin>>p;
        if(p%2==0){
            d.push_back(p/2);
        }
    }
    if(k > d.size()){
        cout<<"NO"<<endl;
        return;
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
