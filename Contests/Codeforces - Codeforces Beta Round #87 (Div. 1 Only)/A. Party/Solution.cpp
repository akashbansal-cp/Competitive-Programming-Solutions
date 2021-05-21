#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> manager(n);
    for(int i=0;i<n;++i)cin>>manager[i];
    // vector<int> visited(n,false);
    int len=0;
    for(int i=0;i<n;++i){
        int j=manager[i];
        int new_len=1;
        while(j!=-1){
            ++new_len;
            j=manager[j-1];
        }
        len=max(len,new_len);
    }
    cout<<len<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
