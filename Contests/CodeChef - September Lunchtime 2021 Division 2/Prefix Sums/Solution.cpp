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
    if(n%4==0){
        cout<<"YES\n";
        vector<int> a(n/2),b(n/2);
        int x=1;
        for(int i=0;i<n/4;++i){
            a[i]=x,b[i]=x+1,b[n/2-1-i]=x+2,a[n/2-1-i]=x+3;
            x+=4;
        }
        for(int e:a)cout<<e<<' ';
        cout<<endl;
        for(int e:b)cout<<e<<' ';
        cout<<endl;

    }
    else{
        cout<<"NO\n";
    }
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
