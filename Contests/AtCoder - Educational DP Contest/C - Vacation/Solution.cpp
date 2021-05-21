#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> data(n,vector<int> (3));
    for(int i=0;i<n;++i)
        cin>>data[i][0]>>data[i][1]>>data[i][2];
    for(int i=1;i<n;++i){
        data[i][0]+=max(data[i-1][1],data[i-1][2]);
        data[i][1]+=max(data[i-1][0],data[i-1][2]);
        data[i][2]+=max(data[i-1][0],data[i-1][1]);
    }
    cout<<max(data[n-1][0],max(data[n-1][1],data[n-1][2]))<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
