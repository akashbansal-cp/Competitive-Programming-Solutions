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
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int p=0;
    for(int i=0;i<n;++i)if(data[i]>data[p])p=i;
    vector<int> ans(n);
    ans[0]=data[p];
    int q=data[p];
    data[p]=-1;
    for(int i=1;i<n;++i){
        bool z=false;
        int tq;
        for(int j=0;j<n;++j){
            if(data[j]!=-1){
                if(z==false){
                    z=true;
                    p=j;
                    tq=__gcd(q,data[j]);
                }
                else{
                    if(__gcd(q,data[j]) > tq){
                        p=j;
                        tq=__gcd(q,data[j]);
                    }
                }
            }
        }
        q=__gcd(q,data[p]);
        ans[i]=data[p];
        data[p]=-1;
    }
    for(int e:ans)cout<<e<<' ';
    cout<<endl;
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
