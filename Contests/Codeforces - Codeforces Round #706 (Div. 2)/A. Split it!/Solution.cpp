#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<k;++i){
        if(s[i]!=s[n-i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(2*k < n){
        cout<<"YES"<<endl;return;
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
