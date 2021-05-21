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
    string s;
    cin>>n>>s;
    int x=0;
    for(char c:s){
        if(c=='0')++x;
    }
    int a=0;
    if(x%2==1){
        a++;
        x--;
    }
    x/=2;
    if(a==0 && x%2==0){
        cout<<"DRAW"<<endl;
    }
    else if(a==1 && x%2==0){
        cout<<"BOB"<<endl;
    }
    else if(a==0 && x%2==1){
        cout<<"BOB"<<endl;
    }
    else{
        cout<<"ALICE"<<endl;
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
