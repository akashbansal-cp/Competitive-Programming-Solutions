#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;++i)
        cin>>heights[i];
    vector<int> cost(n);
    cost[0]=0;
    cost[1]=abs(heights[0]-heights[1]);
    for(int i=2;i<n;++i){
        cost[i]=min(cost[i-1]+abs(heights[i-1]-heights[i]),cost[i-2]+abs(heights[i-2]-heights[i]));
    }
    cout<<cost[n-1]<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
