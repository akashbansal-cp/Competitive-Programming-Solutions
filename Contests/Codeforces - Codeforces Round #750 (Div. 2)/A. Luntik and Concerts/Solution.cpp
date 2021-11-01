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
    int a,b,c;
    cin>>a>>b>>c;
    int x=min(min(a,b),c);
    a-=x,b-=x,c-=x;
    if(a==0){
        int y=min(b/3,c/2);
        b-=3*y;
        c-=2*y;

    }
    if(b==0){
        int m=a%3;
        a/=3;
        if(a >= c){
            a-=c;
            a*=3;
            a+=m;
            cout<<a%2<<endl;
        }
        else{
            c-=a;
            c%=2;
            if(c==0){
                cout<<m%2<<endl;
            }
            else{
                
            }
        }
        c-=(a/3);
        a%=3;

    }
    if(c==0){
        int m=a%2;
        a/=2;
        if(a > b){
            a-=b;
            cout<<m<<endl;
        }
        else{
            b-=a;
            b%=2;
            if(b==0)cout<<m<<endl;
            else cout<<2-m<<endl;
        }
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
