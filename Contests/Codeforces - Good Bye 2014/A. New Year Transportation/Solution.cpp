#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,t;
    cin>>n>>t;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int j=0;
    --t;
    while(j<t){
        j=j+data[j];
    }
    if(j==t)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
