#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,q,k;
    cin>>n>>q>>k;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    vector<int> cfb(n);
    vector<int> cfa(n);
    cfb[0]=data[0]-1;
    for(int i=1;i<n;++i){
        cfb[i]=cfb[i-1]+data[i]-1-data[i-1];
    }
    cfa[n-1]=k-data[n-1];
    for(int i=n-2;i>=0;--i){
        cfa[i]=cfa[i+1]+data[i+1]-1-data[i];
    }
    int l,r;
    for(int i=0;i<q;++i){
        cin>>l>>r;
        --l,--r;
        int ans=0;
        ans+=(cfb[r]-cfb[l]);
        ans+=(cfa[l]-cfa[r]);
        ans+=(data[l]-1);
        ans+=(k-data[r]);
        cout<<ans<<endl;
    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
