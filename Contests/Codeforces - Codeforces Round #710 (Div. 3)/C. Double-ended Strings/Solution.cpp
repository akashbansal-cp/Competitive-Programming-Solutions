#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;
    int ans=a.length()+b.length();
    int m=ans;
    for(int i=1;i<=a.length();++i){
        for(int j=0;j+i<=a.length();++j){
            for(int k=0;k+i<=b.length();++k){
                if(a.substr(j,i)==b.substr(k,i)){
                    ans=min(ans,m-2*i);
                }
            }
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
