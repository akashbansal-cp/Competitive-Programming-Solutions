#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    if(n==2){
        int x,y;
        cout<<"? "<<1<<'\n';
        cin>>x;
        cout<<"? "<<2<<'\n';
        cin>>y;
        if(x<y)
            cout<<"! "<<1<<'\n';
        else
            cout<<"! "<<2<<'\n';
        cout.flush();
        return;
    }
    int l=1,r=n;
    while(r-l > 2){
        int x,y;
        int z=l+r;
        cout<<"? "<<z/2<<'\n';
        cin>>x;
        cout<<"? "<<(z/2)+1<<'\n';
        cin>>y;
        if(x<y){
            r=(z/2)+1;
        }
        else{
            l=z/2;
        }
    }
    if(r-l==2){
        int a,b,c;
        cout<<"? "<<l<<'\n';
        cout<<"? "<<l+1<<'\n';
        cout<<"? "<<l+2<<'\n';
        cin>>a>>b>>c;
        if(l==1 && a<b){
            cout<<"! "<<l<<'\n';
        }
        else if(r==n && b>c){
            cout<<"! "<<r<<'\n';
        }
        else{
            cout<<"! "<<l+1<<'\n';
        }
    }
    else
        cout<<"! "<<r<<'\n';
    cout.flush();
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
