#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define ld long double
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
vector<ld> getData(vector<ll>& x,vector<ll>& y,int n){
    ld cx=0,cy=0,a=0,ar,a1=0,a2=0,a3=0,b;
    for(int i=0;i<n;++i){
        cx=cx+(x[i]+x[(i+1)%n])*((x[i]*y[(i+1)%n])-(x[(i+1)%n]*y[i]));
        cy=cy+(y[i]+y[(i+1)%n])*((x[i]*y[(i+1)%n])-(x[(i+1)%n]*y[i]));
        a=a+((x[i]*y[(i+1)%n])-(x[(i+1)%n]*y[i]));
    }
    a*=3;
    cx=cx/a;
    cy=cy/a;
    for(int i=0;i<n;++i){
        b=pow((x[i]-x[(i+1)%n]),2)+pow((y[i]-y[(i+1)%n]),2);
        ar = (cx*(y[(i+1)%n]-y[i]))+(x[(i+1)%n]*(y[i]-cy))+(x[i]*(cy-y[(i+1)%n]));
        ar=abs(ar);
        cout<<"??" << b<<' '<<ar<<endl;
        a3+=(b/ar);
        b=sqrt(b);
        a1+=b;
        ar/=2;
        cout<<"area is "<<ar<<endl;        
        a2+=ar;
    }
    a3*=0.5;
    cout<<cx<<' '<<cy<<' '<<a1<<' '<<a2<<' '<<a3<<endl;
    return {a1,a2,a3};
}
void solve()
{
    precise(16);
    int n,q;
    cin>>n>>q;
    vector<ll> x(n),y(n);
    for(int i=0;i<n;++i)cin>>x[i]>>y[i];
    vector<ld> d = getData(x,y,n);
    ld a,b,area;
    for(int i=0;i<q;++i){
        cin>>a>>b;
        a*=b;
        area = d[1]+(d[0]*a)+(d[2]*a*a);
        cout<<area<<endl;
    }
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
