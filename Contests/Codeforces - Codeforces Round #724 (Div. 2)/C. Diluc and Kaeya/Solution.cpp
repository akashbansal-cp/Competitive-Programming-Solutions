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
    string s;
    cin>>s;
    map<pair<int,int>,int> ratio;
    vector<int> d(n);
    vector<int> k(n);
    int _d=0,_k=0;
    for(int i=0;i<n;++i){
        if(s[i]=='D')++_d;
        else ++_k;
        d[i]=_d,k[i]=_k;
    }
    vector<int> ans(n);
    for(int i=0;i<n;++i){
        if(d[i]==0){k[i]=1;}
        else if(k[i]==0){d[i]=1;}
        else{
            int z=__gcd(d[i],k[i]);
            d[i]/=z,k[i]/=z;
        }
        if(ratio[{d[i],k[i]}]==0){
            ans[i]=1;
        }
        else{
            int p=ratio[{d[i],k[i]}];
            ans[i]=ans[p-1]+1;
        }
        ratio[{d[i],k[i]}]=i+1;
    }
    // for(auto e:ratio)cout<<e.first.first<<' '<<e.first.second<<' '<<e.second<<endl;
    for(int i=0;i<n;++i)cout<<ans[i]<<' ';
    // cout<<endl<<endl<<endl;
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
