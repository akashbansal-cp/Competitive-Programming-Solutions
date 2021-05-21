#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,u,v;
    cin>>n>>u>>v;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    int ans=INT_MAX;
    for(int i=0;i<n-1;++i){
        if(data[i]==data[i+1])
            ans=min(ans,v+min(u,v));
        else if(abs(data[i]-data[i+1])==1)
            ans=min(ans,min(u,v));
        else
            ans=0;
    }
    
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
