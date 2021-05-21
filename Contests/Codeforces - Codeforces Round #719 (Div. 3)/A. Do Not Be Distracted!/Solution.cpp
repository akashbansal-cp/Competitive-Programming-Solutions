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
    cin>>n;
    string s;
    cin>>s;
    string p="";
    for(int i=0;i<n-1;++i){
        if(s[i]!=s[i+1])p+=s[i];
    }
    p+=s[n-1];
    set<char> z;
    for(char c:p)z.insert(c);
    if(z.size() == p.length()){cout<<"YES"<<endl;}
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
