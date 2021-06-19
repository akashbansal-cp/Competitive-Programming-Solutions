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
    int n; cin>>n;
    int p=0,q=n;
    while(q!=1 && q%2==0){
        q/=2;++p;
    }
    if(n%2==1){
        cout<<"Bob"<<endl;return;
    }
    if(q==1){
        if(p%2==0){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    else{
        if(n%2==0)cout<<"Alice"<<endl;
        else  cout<<"Bob"<<endl;
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
