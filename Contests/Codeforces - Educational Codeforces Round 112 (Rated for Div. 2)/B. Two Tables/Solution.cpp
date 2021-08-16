#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int w,h;cin>>w>>h;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int x,y;cin>>x>>y;
    int p=INT_MAX;
    // case 1 : to the left
    if(x <= x1){
        cout<<0<<endl;return;
    }
    else{
        if(x2-x1+x <= w){
            p=min(p,x-x1);
        }
    }
    // case 2
    if(y <= y1){
        cout<<0<<endl;return;
    }
    else{
        if(y2-y1+y <= h){
            p=min(p,y-y1);
        }
    }
    // case 3
    if(y <= h-y2){
        cout<<0<<endl;return;
    }
    else{
        if(y2-y1+y <= h){
            p=min(p,y-(h-y2));
        }
    }
    // case 4
    if(x <= w-x2){
        cout<<0<<endl;return;
    }
    else{
        if(x2-x1+x <= w){
            p=min(p,x-(w-x2));
        }
    }
    // cout<<'t'<<p<<endl;
    if(x2-x1+x > w || y2-y1+y > h){
        if(p==INT_MAX)cout<<-1<<endl;
        else cout<<(double)p<<endl;
        return;
    }
    double a1 = sqrt((double)(pow((x1-x),2)+pow((y1-y),2)));
    double a2 = sqrt((double)(pow((w-x-x2),2)+pow((y1-y),2)));
    double a3 = sqrt((double)(pow((x1-x),2)+pow((h-y2-y),2)));
    double a4 = sqrt((double)(pow((w-x-x2),2)+pow((h-y2-y),2)));
    double a = min(a1,min(a2,min(a3,a4)));
    double b = double(p);
    a=min(a,b);
    cout<<a<<endl;
}
int main()
{
    precise(8);
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
