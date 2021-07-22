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
    string s;cin>>s;
    int p1=0,p2=s.length()-1;
    bool ans =true;
    char z='a'+p2;
    for(int i=0;i<s.length();++i){
        if(z-i==s[p1])++p1;
        else if(z-i==s[p2])--p2;
        else {
            ans = false;
            break;
        }
    }
    if(ans == false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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
