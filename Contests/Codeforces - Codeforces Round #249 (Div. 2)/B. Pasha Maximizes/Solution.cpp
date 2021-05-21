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
    int k;
    string s;
    cin>>s>>k;
    int n=s.length();
    for(int i=0;i<n;++i){
        int z=i;
        for(int j=i+1;j<n;++j){
            // for limit
            if(j-i > k)break;
            // checking if s[j] is greater than s[z]
            if(s[j] > s[z]){z=j;}
        }
        k-=(z-i);
        for(int j=z;j>i;--j)swap(s[j],s[j-1]);
    }   
    cout<<s<<endl;
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
