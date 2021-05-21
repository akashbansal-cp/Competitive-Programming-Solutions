#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
vector<int> prime={0,1,11,111,1111,11111,111111,1111111,11111111,111111111};
int digits(int n){
    int ans=0;
    while(n!=0){
        ++ans;
        n/=10;
    }
    return  ans;
}
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=prime[c],y=prime[c];
    while(digits(x)!=a)x*=2;
    while(digits(y)!=b)y*=3;
    cout<<x<<' '<<y<<endl;

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
