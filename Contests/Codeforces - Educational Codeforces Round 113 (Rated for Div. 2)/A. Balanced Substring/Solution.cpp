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
    int n;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;++i){
        int a=0,b=0;
        if(s[i]=='a')++a;
        else ++b;
        for(int j=i+1;j<n;++j){
            if(s[j]=='a')++a;
            else ++b;
            if(a==b){
                cout<<i+1<<' '<<j+1<<endl;
                return;
            }
        }
    }
    cout<<-1<<' '<<-1<<endl;
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
