#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;++i){
        if(s[i]=='*'){
            ++ans;
            s[i]='x';
            break;
        }
    }
    for(int i=n-1;i>=0;--i){
        if(s[i]=='*'){
            ++ans;
            s[i]='x';
            break;
        }
    }
    vector<int> data;
    vector<int> values;
    for(int i=0;i<n;++i){
        if(s[i]=='*')data.push_back(i);
        if(s[i]=='x')values.push_back(i);
    }
    if(values.size()<2){
        cout<<ans<<endl;
        return;
    }
    int p=values[0],q=values[1];
    int x=0;
    while(q-p>k){
        for(;x<data.size();++x){
            if(data[x]>p+k)break;
        }
        --x;
        p=data[x];
        ++ans;
        ++x;
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
