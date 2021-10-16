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
    char c;cin>>c;
    string s;cin>>s;
    vector<int> t;
    for(int i=0;i<n;++i){
        if(s[i]!=c)t.push_back(i+1);
    }
    if(t.size()==0){
        cout<<0<<endl;
        return;
    }
    vector<int> cantake(n+1,true);
    cantake[0]=cantake[1]=false;
    for(int i=n;i>1;--i){
        if(s[i-1]==c){
            if(cantake[i]==true){
                cout<<1<<'\n'<<i<<endl;
                return;
            }
        }
        else{
            cantake[i]=false;
            for(int j=2;j*j <= i;++j){
                if(i%j==0){
                    cantake[i/j]=cantake[j]=false;
                }
            }
        }
    }
    cout<<2<<'\n'<<n<<' '<<n-1<<endl;
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
