#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    long long temp;
    long long ans=0;
    vector<long long> power(32,0);
    for(long long i=0;i<n;++i){
        cin>>temp;
        long long x=31;
        while(temp<pow(2,x)){
            --x;
        }
        ans+=power[x];
        power[x]++;
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
