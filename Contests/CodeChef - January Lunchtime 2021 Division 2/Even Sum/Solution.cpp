#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long sum=0;
    int temp;
    for(int i=0;i<n;++i){
        cin>>temp;
        sum+=(long long)temp;
    }
    if(sum%2==0)
        cout<<1;
    else
        cout<<2;
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
