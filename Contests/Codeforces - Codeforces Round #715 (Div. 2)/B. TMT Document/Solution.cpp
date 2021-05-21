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
    int x=0,y=0;
    for(char c:s){
        if(c=='T')++x;
        else ++y;
    }
    int a=0,b=x,z=0;
    for(int i=0;i<n;++i){
        if(s[i]=='M'){
            if(a-1 < z || b<y-z || 2*y != (a+b)){
                cout<<"NO"<<endl;
                return;
            }
            ++z;
        }
        else{
            ++a;--b;
        }
    }
    cout<<"YES"<<endl;
    
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