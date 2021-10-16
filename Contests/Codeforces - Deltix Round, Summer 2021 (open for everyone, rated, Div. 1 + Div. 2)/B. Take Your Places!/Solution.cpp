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
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int p=0,q=0;
    for(int e:data){
        if(e&1)++q;
        else ++p;
    }
    if(abs(p-q) > 1){
        cout<<-1<<endl;
        return;
    }
    ll ans = 0;
    int l=0;
    bool z=true;
    if(p > q)z=false; 
    for(int i=0;i<n;++i){
        if(z==true && data[i]%2==1){
            ans+=(ll)abs(i-l);
            l+=2;
        }
        else if(z==false && data[i]%2==0){
            ans+=(ll)abs(i-l);
            l+=2;
        }
    }
    if(p==q){
        ll a=0;
        l=0;
        for(int i=0;i<n;++i){
            if(data[i]%2==0){
                a+=(ll)abs(i-l);
                l+=2;
            }
        }
        ans=min(ans,a);
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
