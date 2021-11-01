#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pa(x,y) cout<<"Case #"<<x<<": "<<y<<endl;
#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
    int n,d,c,m;
    cin>>n>>d>>c>>m;
    string s;cin>>s;
    int i=0;
    for(i=0;i<n;++i){
        if(s[i]=='D'){
            if(d==0){
                pa(t,"NO");
                return;
            }
            else{
                --d;
                c+=m;
            }
        }
        else if(s[i]=='C'){
            if(c==0){
                break;
            }
            else --c;
        }
    }
    if(i < n){
        for(;i<n;++i){
            if(s[i]=='D'){
                pa(t,"NO");
                return;
            }
        }
    }
    pa(t,"YES");
}
int main()
{
    fio
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)
        solve(i);
    return 0;
}
