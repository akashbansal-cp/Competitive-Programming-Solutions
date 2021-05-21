#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> height(n,0);
    for(int i=0;i<n;++i)cin>>height[i];
    vector<int> c(n,0);
    for(int i=0;i<n;++i){
        int ans=0;
        for(int j=i+1;j<n;++j){
            if(height[j]>height[i])break;
            else if(height[j]==height[i])++ans;
        }
        for(int j=i-1;j>=0;--j){
            if(height[j]>height[i])break;
            else if(height[j]==height[i])++ans;
        }
        c[i]=ans;
    }
    for(int e:c)cout<<e<<' ';cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
