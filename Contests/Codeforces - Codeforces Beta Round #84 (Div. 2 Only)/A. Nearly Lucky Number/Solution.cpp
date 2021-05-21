#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;cin>>n;
    long long z=0;
    while(n!=0){
        int p=n%10;
        if(!(p!=4 && p!=7)){
            ++z;
        }
        n/=10;
    }
    if(z==0){cout<<"NO"<<endl;return;}
    while(z!=0){
        int p=z%10;
        if(p!=4 && p!=7){
            cout<<"NO"<<endl;return;
        }
        z/=10;
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
