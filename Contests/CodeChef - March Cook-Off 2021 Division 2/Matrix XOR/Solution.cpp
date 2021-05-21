#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    pair<int,int> ini={1,1};
    pair<int,int> final={1,1};
    int ans=0;
    while(true){
        int p=abs(ini.first-final.first)+1;
        if(p%2==1){
            int x=k+ini.first+ini.second;
            ans=(ans^x);
        }
        if(ini.second<m)++ini.second;
        else if(ini.first<n) ++ini.first;
        else break;
        if(final.first<n)++final.first;
        else ++final.second;
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
