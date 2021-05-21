#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> level(n);
    for(int i=0;i<n;++i)
        cin>>level[i];
    sort(level.begin(),level.end());
    int x=1;
    int i=1;
    while(i<n && level[i]==level[0]){
        ++i;++x;
    }
    cout<<n-x<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
