#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    if(x<=y/2){
        cout<<x<<endl;
    }
    else{
        int a=y/2;
        x-=a,y-=(2*a);
        int p=x/3;
        p=min(p,a);
        a-=p;
        x+=p,y+=(2*p);
        a+=min(y,x/2);
        cout<<a<<endl;
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
