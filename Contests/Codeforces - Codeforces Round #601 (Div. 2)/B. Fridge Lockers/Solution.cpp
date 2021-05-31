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
    int n,m;
    cin>>n>>m;
    vector<int> wt(n);
    for(int i=0;i<n;++i)cin>>wt[i];
    if(n==2 || m!=n){
        cout<<-1<<endl;
        return;
    }
    int sum=0;
    for(int e:wt)sum+=(2*e);
    cout<<sum<<endl;
    for(int i=1;i<n;++i)cout<<i<<' '<<i+1<<endl;
    cout<<n<<' '<<1<<endl;
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
