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
    int n;cin>>n;
    vector<int>  data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int ans=0;
    for(int i=0;i<n;++i){
        for(int aj=1;aj<=2*n;++aj){
            int p=data[i]*aj;
            p=p-2-i;
            if(p>i && p<n && data[p]==aj)++ans;
            if(p>=n)break;
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
