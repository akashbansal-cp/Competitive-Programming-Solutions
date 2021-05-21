#include <bits/stdc++.h>
using namespace std;
void solve(int x)
{
    int n,k,z=0;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<n/2;++i){
        if(s[i]!=s[n-i-1])++z;
    }
    if(k>z){
        cout<<"Case #"<<x<<": "<<k-z<<endl;
    }
    else{
        cout<<"Case #"<<x<<": "<<0<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    int k=0;
    while (t--)
        solve(++k);
    return 0;
}
