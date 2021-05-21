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
    int n;
    cin>>n;
    int p=0,q=0;
    while(n%2==0){
        ++p;
        n/=2;
    }
    while(n%3==0){
        ++q;
        n/=3;
    }
    if(n!=1 || p>q){
        cout<<-1<<endl;return;
    }
    cout<<q+(q-p)<<endl;return;
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
