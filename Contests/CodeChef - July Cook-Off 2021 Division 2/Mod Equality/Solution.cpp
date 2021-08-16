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
    int p;
    sort(data.begin(),data.end());
    int q=1;
    bool con = true;
    while(data[q] == data[0])++q;
    for(int i=q;i<n;++i){
        p=data[i]-data[0];
        if(data[i]%p!=data[0]){
            con = false;
            break;
        }
    }
    if(con == true){
        cout<<n-q<<endl;
    }
    else cout<<n<<endl;
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
