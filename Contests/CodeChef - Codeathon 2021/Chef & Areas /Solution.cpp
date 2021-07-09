#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fio
    int t,x,y;
    string s;
    cin >> t;
    while (t--){
        cin>>s>>x>>y;
        if(s=="rectangle"){
            cout<<x*y<<endl;
        }
        else if(s=="square"){
            cout<<x*y/2<<endl;
        }
        else if(s=="triangle"){
            cout<<x*y<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
