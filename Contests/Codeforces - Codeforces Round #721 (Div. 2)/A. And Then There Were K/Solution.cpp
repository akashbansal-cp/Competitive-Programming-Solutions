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
    vector<int> data(31,0);
    for(int i=30;i>=0;--i){
        if(n>=pow(2,i)){
            data[i]=1;
            n-=pow(2,i);
        }
    }
    for(int i=31;i>=0;--i){
        if(data[i]==1){
            data[i]=0;
            --i;
            while(i>=0){
                data[i]=1;
                --i;
            }
        }
    }
    n=0;
    for(int i=0;i<31;++i){
        if(data[i]==1)n+=pow(2,i);
    }
    cout<<n<<endl;
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
