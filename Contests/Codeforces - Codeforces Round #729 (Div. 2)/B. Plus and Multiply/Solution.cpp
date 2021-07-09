#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
bool check(int n,int a,int b){
    if(n==1)return true;
    if(n==0)return false;
    int p=false;
    if(n%a==0)p = p || check(n/a,a,b);
    if(n>b && p==false)p = p || check(n-b,a,b);
    return p;
}
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(a==1){
        if((n-1)%b==0)cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
        return;
    }
    if(b==1 || n==1){
        cout<<"YES\n";return;
    }
    int p=false;
    if(n%a==0)p=p||check(n/a,a,b);
    if(n>b && p==false)p = p || check(n-b,a,b);
    if(p==true)cout<<"YES\n";
    else cout<<"NO\n";
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
