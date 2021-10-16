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
    string a,b;cin>>a>>b;
    int ans=0;
    for(int i=0;i<n;++i){
        if((a[i]=='0' && b[i]=='1') || (a[i]=='1'&&b[i]=='0'))ans+=2;
        else if(a[i]=='0'&&b[i]=='0'){
            if(i-1 >= 0 && a[i-1]=='1' && b[i-1]=='1'){
                a[i-1]='$';
                ans+=2;
            }
            else if(i+1 < n && a[i+1]=='1' && b[i+1]=='1'){
                a[i+1]='$';
                ans+=2;
            }
            else ans+=1;
        }
    }
    cout<<ans<<endl;
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
