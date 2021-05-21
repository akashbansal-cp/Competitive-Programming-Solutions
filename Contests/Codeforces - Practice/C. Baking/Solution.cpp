#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b&&b<c){
        cout<<c-a<<endl;
    }
    else if(a<c&&c<b){
        cout<<b-a<<endl;
    }
    else if(b<a&&a<c){
        cout<<(c-b)+min(c-a,a-b)<<endl;
    }
    else if(b<c&&c<a){
        cout<<a-b<<endl;
    }
    else if(c<a&&a<b){
        cout<<(b-c)+min(a-c,b-a)<<endl;
    }
    else if(c<b&&b<a){
        cout<<a-c<<endl;
    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
