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
    int l,r;
    cin>>l>>r;
    ll m=1;
    ll ld=0,rd=0;
    ll rem;
    while(l!=0){
        rem=l%10;
        l/=10;
        rem*=m;
        m*=10;
        ++m;
        ld+=rem;
    }
    m=1;
    while(r!=0){
        rem=r%10;
        r/=10;
        rem*=m;
        m*=10;
        ++m;
        rd+=rem;
    }
    cout<<rd-ld<<endl;
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
