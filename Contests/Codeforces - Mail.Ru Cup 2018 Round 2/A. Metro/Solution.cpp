#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,s;
    cin>>n>>s;
    vector<int> in(n);
    vector<int> out(n);
    for(int i=0;i<n;++i)cin>>in[i];
    for(int i=0;i<n;++i)cin>>out[i];
    if(in[0]==0 || (out[s-1]==0 && in[s-1]==0)){cout<<"NO"<<endl;return;}
    if(in[s-1]==1){cout<<"YES"<<endl;return;}
    for(int i=s;i<n;++i){
        if(in[i]==1 && out[i]==1){cout<<"YES"<<endl;return;}
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
