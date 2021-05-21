#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    vector<int> boys(a,0);
    vector<int> girls(b,0);
    vector<pair<int,int>> couples(k);
    int x,y;
    for(int i=0;i<k;++i){
        cin>>x;
        --x;
        boys[x]++;
        couples[i].first=x;
    }
    for(int i=0;i<k;++i){
        cin>>y;
        --y;
        girls[y]++;
        couples[i].second=y;
    }
    long long total=0;
    for(int i=0;i<couples.size();++i){
        total+=(k+1-boys[couples[i].first]-girls[couples[i].second]);
    }
    cout<<total/2<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
