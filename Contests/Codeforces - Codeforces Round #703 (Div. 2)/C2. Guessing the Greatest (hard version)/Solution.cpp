#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int smax;
    cout<<"? "<<1<<' '<<n<<endl;
    cin>>smax;
    bool dir = true;//means right
    int i=smax,j=n;
    if(smax!=1){
        int k;
        cout<<"? "<<1<<' '<<smax<<endl;
        cin>>k;
        if(k==smax){
            dir=false;
            i=1,j=smax;
        }
    }
    int m;
    while(j-i>1){
        int k=(i+j)/2;
        if(dir){
            cout<<"? "<<smax<<' '<<k<<endl;
            cin>>m;
            if(m==smax)
                j=k;
            else
                i=k;
        }
        else{
            cout<<"? "<<k<<' '<<smax<<endl;
            cin>>m;
            if(m==smax)
                i=k;
            else
                j=k;
        }
    }
    if(dir){
        if(smax==i)
            i=i+1;
        else{
            cout<<"? "<<smax<<' '<<i<<endl;
            cin>>m;
            if(m!=smax)
                i=i+1;
        }
    }
    else if(!dir){
        if(i+1!=smax){
            cout<<"? "<<i+1<<' '<<smax<<endl;
            cin>>m;
            if(m==smax)
                i++;
        }
    }
    cout<<"! "<<i<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
