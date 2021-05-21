#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    int n;
    cin>>n;
    int i=1,j=n;
    while(j-i!=1){
        cout<<"? "<<i<<' '<<j<<endl;
        cin>>x;
        int m=(i+j)/2;
        if(x<=m){
            cout<<"? "<<i<<' '<<m<<endl;
        }
        else{
            cout<<"? "<<m<<' '<<j<<endl;
        }
        cin>>y;
        if(x==y){
            if(x<=m)
                j=m;
            else
                i=m;
        }
        else{
            if(x>m)j=m;
            else i=m;
        }
    }
    cout<<"? "<<i<<' '<<j<<endl;
    cin>>x;
    if(x==i)
        cout<<"! "<<j<<endl;
    else
        cout<<"! "<<i<<endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
