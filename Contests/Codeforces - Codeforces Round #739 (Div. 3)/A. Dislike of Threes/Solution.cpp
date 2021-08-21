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
}
int main()
{
    fio
    int t;
    cin >> t;
    vector<int> dig(1002);
    int p=1;
    for(int i=1;i<1002;){
        if(p%3==0 || p%10==3){
            ++p;
            continue;
        }
        dig[i]=p;
        ++p,++i;
    }
    int k;
    while (t--)
    {
        cin>>k;
        cout<<dig[k]<<endl;
    }
    return 0;
}
