#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<bool> prime(n+1,true);
    for(int i=2;i<=n;++i){
        if(prime[i]==true){
            int j=2;
            while(j*i<=n){
                prime[i*j]=false;
                ++j;
            }
        }
    }
    vector<int> ans(n+1,0);
    ans[1]=1;
    for(int i=2;i<=n;++i){
        if(prime[i]==true)ans[i]=2;
    }
    for(int i=1;i<=n;++i){
        if(ans[i]==0){
            set<int> factors;
            for(int j=2;j*j<=i;++j){
                if(i%j==0){
                    factors.insert(ans[i]);
                    factors.insert(ans[i/j]);
                }
            }
            int p=2;
            while(factors.find(p) != factors.end()){
                ++p;
            }
            ans[i]=p;
        }
    }
    for(int i=1;i<=n;++i)cout<<ans[i]<<' ';
    cout<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
