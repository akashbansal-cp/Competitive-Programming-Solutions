#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    while(k>3){
        --k,--n;
        cout<<1<<' ';
    }
    if(n%2==1){
        cout<<1<<' '<<n/2<<' '<<n/2<<endl;
    }
    else{
        if(n%4==0){
            cout<<n/4<<' '<<n/4<<' '<<n/2<<endl;
        }
        else{
            cout<<2<<' '<<n/2-1<<' '<<n/2-1<<endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
