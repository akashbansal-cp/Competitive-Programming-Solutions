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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int p=0;
    for(int i=1;i<n;++i){
        if(s[i] > s[p]){
            p=i;
            break;
        }
    }
    if(p!=0){
        s=s.substr(0,p);
    }
    string str;
    n=s.length();
    for(int i=1;i<=n;++i){
        string _s=s.substr(0,i);
        int x=0;
        string _p="";
        for(int j=0;j<k;++j,++x){
            _p+=_s[x%i];
        }
        if(i==1)str=_p;
        else str=min(str,_p);
    }
    cout<<str<<endl;
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
