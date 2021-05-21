#include <bits/stdc++.h>
using namespace std;
vector<vector<int,int>> ncr;
void solve()
{
    int n,ans=0,last=-1;
    cin>>n;
    int temp,m=0;
    for(int i=0;i<n;++i){
        cin>>temp;
        if(temp==last){
            ++m;
        }
        else{
            ans=max(ans,m);
            m=1;
            last=temp;
        }
    }
    ans=max(ans,m);
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
