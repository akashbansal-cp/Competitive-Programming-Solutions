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
    string s1,s2;
    string s;
    cin>>s;
    int n=10;
    for(int i=0;i<n;++i){
        if(i%2==0)s1+=s[i];
        else s2+=s[i];
    }
    // case 1: game is stopped when team a ensures win


    string p=s;
    for(int i=0;i<10;++i){
        if(p[i]=='?'){
            if(i%2==0)p[i]='1';
            else p[i]='0';
        }
    }
    int x=10;
    int a=0,b=0;
    int _a=5,_b=5;
    for(int i=0;i<10;++i){
        if(p[i]=='1'){
            if(i%2==0)++a;
            else ++b;
        }
        if(i%2==0)--_a;
        else --_b;
        if(a > b+_b){
            x=i+1;break;
        }
    }
    p=s;
    for(int i=0;i<10;++i){
        if(p[i]=='?'){
            if(i%2==1)p[i]='1';
            else p[i]='0';
        }
    }
    a=0,b=0;
    _a=5,_b=5;
    for(int i=0;i<10;++i){
        if(p[i]=='1'){
            if(i%2==1)++a;
            else ++b;
        }
        if(i%2==1)--_a;
        else --_b;
        if(a > b+_b){
            x=min(x,i+1);
        }
    }
    cout<<x<<endl;
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
