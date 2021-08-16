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
    string s,t;
    cin>>s>>t;
    int i=s.length()-1,j=t.length()-1;
    while(i>=0 && j>=0){
        if(s[i]==t[j])--i,--j;
        else {
            i-=2;
        }
    }
    if(j==-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
