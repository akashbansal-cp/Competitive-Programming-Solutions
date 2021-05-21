#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<double> x(n);
    vector<double> y(n);
    int p=0,q=0;
    double a,b;
    for(int i=0;i<2*n;++i){
        cin>>a>>b;
        if(a==0){
            x[p]=b*b;
            ++p;
        }
        if(b==0){
            y[q]=a*a;
            ++q;
        }
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    double ans=0;
    for(int i=0;i<n;++i){
        // x[i]+=y[i];
        ans+=sqrtl(x[i]+y[i]);  
    }
    cout<< fixed << setprecision(15);
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
