#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int q,d;
    cin>>q>>d;
    int temp;
    for(int i=0;i<q;++i){
        cin>>temp;
        bool ret=false;
        for(int j=0;j<temp;j+=d){
            int m=temp-j;
            while(m>0 && m%10!=d){
                m/=10;
            }
            if(m%10==d){
                cout<<"YES"<<endl;
                ret=true;
                break;
            }
        }
        if(ret==false){
            cout<<"NO"<<endl;
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
