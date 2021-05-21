#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    map<int,int> values;
    for(int i=0;i<n;++i){
        values[data[i]%m]++;
    }
    int ans=0;
    if(values[0]!=0)++ans;
    for(int i=1;i<=m/2;++i){
        int a=values[i];
        int b=values[m-i];
        if(a!=0 && b!=0){
            if(a<b)++a;
            else if(b<a)++b;
            ans++;
            ans+=abs(a-b);
        }
        else{
            ans+=max(a,b);
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
