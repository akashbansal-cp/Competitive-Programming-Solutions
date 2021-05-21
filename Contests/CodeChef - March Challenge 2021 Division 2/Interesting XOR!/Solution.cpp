#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int c;
    cin>>c;
    int x=30;
    int a=0,b=0;
    bool cond=false;
    bool ini=true;
    while(x>=0){
        if(pow(2,x) <= c){
            c-=pow(2,x);
            if(cond == false)
                cond=true;
            if(ini){
                ini=false;
                a=pow(2,x);
            }
            else{
                b+=pow(2,x);
            }
            // a = (a==0) ? pow(2,x) : a;
            // b = (a==0) ? 0 : b+pow(2,x);
        }
        else{
            if(cond){
                a+=pow(2,x);
                b+=pow(2,x);
            }
        }
        --x;
        // cout<<a<<b<<endl;
    }
    cout<<(ll)a*(ll)b<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
