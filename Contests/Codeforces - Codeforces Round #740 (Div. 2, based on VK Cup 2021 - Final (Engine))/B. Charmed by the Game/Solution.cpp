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
    int a,b;cin>>a>>b;
    int n=a+b;
    set<int> data;
    // if alice start   
    int A=(n+1)/2,B=n/2;
    for(int i=0;i<=min(A,a);++i){
        if(a-i <= B){
            int k=A+a-i-i;
            if(k>=0)
            data.insert(k);
        }
    }
    // if bob start
    A=n/2,B=(n+1)/2;
    for(int i=0;i<=min(A,a);++i){
        if(a-i <= B){
            int k=A+a-i-i;
            if(k>=0)
            data.insert(k);
        }
    }
    cout<<data.size()<<endl;
    for(int e:data)cout<<e<<' ';
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
