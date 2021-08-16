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
    float s1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    float s2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    float s3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    float x,y;
    if(s1==s2){
        x=s1,y=s2;
    }
    else if(s2==s3){
        x=s2,y=s3;
    }
    else{
        x=s3,y=s2;
    }
    float peri = s1+s2+s3;
    y/=2;
    float h = sqrt(pow(x,2)+pow(y,2));
    area = h*x;
    
}
int main()
{
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
