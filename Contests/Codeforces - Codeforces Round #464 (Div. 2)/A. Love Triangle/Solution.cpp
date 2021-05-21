#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> f(n);
    for(int i=0;i<n;++i){
        cin>>f[i];
        --f[i];
    }
    for(int i=0;i<n;++i){
        int a=f[i];
        int b=f[a];
        if(b!=i && i==f[b]){
            cout<<"YES"<<endl;return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
