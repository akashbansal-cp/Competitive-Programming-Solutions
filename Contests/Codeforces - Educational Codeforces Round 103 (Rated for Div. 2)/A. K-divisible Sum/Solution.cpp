#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,p;
    cin>>n>>p;
    int k=p;
    if(k<n){
        if(n%k==0){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<2<<endl;
            return;
        }
    }
    int x=k/n;
    int y=k%n;
    if(y==0)
        cout<<x;
    else
        cout<<x+1;
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
