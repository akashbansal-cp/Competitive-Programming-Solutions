#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    for(int i=0;i<n;++i){
        vector<int> visited(n,false);
        visited[i]=true;
        int j=data[i];
        while(visited[j-1]==false){
            visited[j-1]=true;
            j=data[j-1];
        }
        cout<<j<<' ';
    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
