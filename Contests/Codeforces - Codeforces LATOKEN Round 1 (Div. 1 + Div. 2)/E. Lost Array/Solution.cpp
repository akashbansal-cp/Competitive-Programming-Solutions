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
    int n,k;
    cin>>n>>k;
    int p;
    if(n%2==1 &&  k%2==0){
        cout<<-1<<endl;return;
    }
    if((n%2==0 && k%2==0) || (n%2==0 && k%2==1)){
        int p1=n/k;
        if(n%k!=0)++p1;
        if(p1%2==0)++p1;
        int p2=n/(n-k);
        if(n%(n-k)!=0)++p2;
        if(p2%2==1)++p2;
        if(n <= 2*k)p=p1;
        else p=p2;
    }
    else if(n%2==1 && k%2==1){
        p=n/k;
        if(n%k!=0)++p;
        if(p%2==0)++p;
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
