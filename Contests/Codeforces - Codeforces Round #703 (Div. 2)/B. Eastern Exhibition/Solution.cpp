#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;++i)
        cin>>x[i]>>y[i];
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    if(n%2==1){
        cout<<1<<endl;
        return;
    }
    // for x
    int m=n/2;
    --m;
    int a;
    a=x[m+1]-x[m]+1;
    int b=1;
    b=y[m+1]-y[m]+1;
    cout<<(ll)a*(ll)b<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
