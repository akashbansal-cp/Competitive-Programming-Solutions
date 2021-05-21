#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> data(n);
    for(int i=0;i<n;++i){
        cin>>data[i].first;
        data[i].second=i+1;
    }
    sort(data.begin(),data.end());
    if(data[0].first!=data[1].first)cout<<data[0].second;
    else cout<<data[n-1].second;
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
