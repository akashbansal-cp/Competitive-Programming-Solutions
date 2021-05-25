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
    string s;
    cin>>s;
    int x=0;
    for(char c:s){
        if(c=='0')++x;
    }
    if(x==1){
        cout<<"BOB"<<endl;
    }
    else{
        if(x%2==0)cout<<"BOB"<<endl;
        else cout<<"ALICE"<<endl;
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
