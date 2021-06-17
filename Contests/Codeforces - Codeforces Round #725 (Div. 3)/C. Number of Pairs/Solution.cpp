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
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    sort(data.begin(),data.end());
    ll ans=0;
    int _l,_r;
    int mid;
    ll no=0;
    for(int i=0;i<n-1;++i){
        _l=l-data[i],_r=r-data[i];
        int x=i+1,y=n-1;
        while(y-x > 1){
            mid=(x+y)/2;
            if(data[mid] >= _l)y=mid;
            else x=mid;
        }
        int p=-1;
        // cout<<p<<' '<<"--"<<x<<' '<<_l<<endl;
        if(data[x] >= _l)p=x;
        else if(data[y] >= _l)p=y;
        if(p==-1)continue;
        x=i+1,y=n-1;
        while(y-x > 1){
            mid=(x+y)/2;
            if(data[mid] > _r)y=mid;
            else x=mid;
        }
        int q=-1;
        if(data[y] <= _r)q=y;
        else if(data[x] <= _r)q=x;
        no=(ll)q-p+1;
        if(no < 1)continue;
        // cout/<<p<<' '<<q<<endl;
        ans+=no;
        // cout<<no<<endl;
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
