#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll ans=0;
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    vector<int> value(n,0);
    for(int i=0;i<n-1;++i){
        if(value[i]<data[i]-1)
            value[i]=data[i]-1;
        if(i+data[i]>=n){
            ans+=(data[i]-n+1+i);
            value[i]-=(data[i]-n+1+i);
            data[i]=n-i-1;
        }
        int j=i+data[i];
        while(j>i && value[i]!=0){
            value[j]++,value[i]--,j--;
        }
        value[i+1]+=value[i];
    }
    ans+=max(data[n-1]-1,value[n-1]);
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