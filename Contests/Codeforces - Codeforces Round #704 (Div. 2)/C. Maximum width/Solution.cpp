#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<int> left(m);
    vector<int> right(m);
    int i=0,j=0;
    while(i<m){
        while(t[i]!=s[j])
            ++j;
        left[i]=j;
        ++j;
        ++i;
    }
    i=m-1,j=n-1;
    while(i>=0){
        while(t[i]!=s[j])
            --j;
        right[i]=j;
        --j,--i;
    }
    int ans=0;
    for(int i=0;i<m-1;++i){
        ans=max(ans,right[i+1]-left[i]);
    }
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
