#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int a=0,b=0;
    for(int i=0;i<n;++i){
        if(s[i]=='1')
            ++a;
        else
            ++b;
    }
    int x=0,y=0;
    int ans=INT_MAX;
    for(int i=0;i<n;++i){
        if(s[i]=='1'){
            ans=min(ans,x+b-y);
            ++x;
        }
        else{
            ans=min(ans,x+b-y-1);
            ++y;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
