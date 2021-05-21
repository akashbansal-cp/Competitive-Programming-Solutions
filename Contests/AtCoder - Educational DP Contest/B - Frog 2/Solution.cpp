#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> heights(n);
    for(int i=0;i<n;++i)
        cin>>heights[i];
    vector<int> cost(n,INT_MAX);
    cost[0]=0;
    cost[1]=abs(heights[1]-heights[0]);
    for(int i=2;i<n;++i){
        for(int j=1;j<=k;++j){
            if(i<j)
            break;
            cost[i]=min(cost[i],cost[i-j]+abs(heights[i]-heights[i-j]));
        }
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
