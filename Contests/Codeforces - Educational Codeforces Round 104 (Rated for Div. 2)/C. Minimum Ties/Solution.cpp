#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;    
    //print
    for(int i=1;i<n;++i){
        bool dir=true;
        for(int j=i;j<n;++j){
            if(n%2==0 && i%2==1 && j==i){
                cout<<0<<' ';
            }
            else{
                if(dir==true)
                    cout<<-1<<' ';
                else
                    cout<<1<<' ';
            }
            dir=!dir;
        }
    }
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
