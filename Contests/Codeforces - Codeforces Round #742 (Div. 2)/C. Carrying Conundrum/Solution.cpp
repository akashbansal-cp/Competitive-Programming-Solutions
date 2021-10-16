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
ll ans = 0;
void vbyv(vector<int>& p,int k,int l){
    // cout<<k<<' '<<l<<endl;
    if(k==p.size()){
        ans+=l;
        return;
    }
    int z=min(1,p[k]);
    if(k+2 >= p.size())z=0;
    // if(p.size()==1)cout<<"~~~"<<z<<' '<<k<<' '<<p.size()<<endl;
    for(int i=0;i<=z;++i){
        if(k+2 < p.size())p[k+2]+=(10*i);
        int x=min(p[k]-i+1,19-p[k]+i);
        vbyv(p,k+1,l*x);
        if(k+2 < p.size())p[k+2]-=(10*i);
    }
}
void solve()
{
    ans = 0;
    int n;cin>>n;
    vector<int> p;
    while(n!=0){
        p.push_back(n%10);
        n/=10;
    }
    reverse(p.begin(),p.end());
    // for(int e:p)cout<<e<<' ';cout<<endl;
    vbyv(p,0,1);
    // cout<<"gfa"<<endl;
    cout<<ans-2<<endl;
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
