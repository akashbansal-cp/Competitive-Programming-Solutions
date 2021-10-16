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
int _t;
int query(bool p,int i,int j){
    if(p)cout<<"and ";
    else cout<<"or ";
    cout<<i<<' '<<j<<endl;
    cin>>_t;
    return _t;
}
void solve()
{
    int n,k;cin>>n>>k;
    vector<int> d(n);
    int a=0,b=0,c=0,_t=0;
    a=query(true,1,2)+query(false,1,2);
    b=query(true,1,3)+query(false,1,3);
    c=query(true,2,3)+query(false,2,3);
    d[0]=(a+b-c)/2;
    d[1]=(a+c-b)/2;
    d[2]=(b+c-a)/2;
    for(int i=4;i<=n;++i){
        int x=query(true,1,i)+query(false,1,i);
        d[i-1]=x-d[0];
    }
    sort(d.begin(),d.end());
    cout<<"finish "<<d[k-1]<<endl;
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
