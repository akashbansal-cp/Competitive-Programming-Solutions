#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> points(n+1);
    points[n].first=1,points[n].second=1;
    for(int i=0;i<n;++i)cin>>points[i].first;
    for(int i=0;i<n;++i)cin>>points[i].second;
    sort(points.begin(),points.end());
    int ans=0;
    int p,a,b,x,y;
    int cost=0;
    for(int i=0;i<n;++i){
        a=points[i].first,b=points[i].second;
        x=points[i+1].first,y=points[i+1].second;
        if((a+b)%2==0 && a-b==x-y){
            cost+=(x-a);
            continue;
        }
        if((a+b) % 2 == 0){
            ++a;
        }
        if((x+y) % 2 == 0){
            --x,++cost;
        }
        p=x+b-y-a;
        cost+=(p/2);
    }
    cout<<cost<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
