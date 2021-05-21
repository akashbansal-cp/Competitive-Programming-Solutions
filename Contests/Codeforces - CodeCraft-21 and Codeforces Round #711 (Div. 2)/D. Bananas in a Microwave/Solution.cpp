#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,t;
    double x,y;
    cin>>n>>m;
    vector<int> tstamp(m+1,-1);
    tstamp[0]=0;
    for(int i=0;i<n;++i){
        cout<<fixed<<setprecision(5);
        cin>>t>>x>>y;
        double p = x/100000;
        vector<int> oper(m+1,0);
        for(int j=0;j<m+1;++j){
            if(t==1){
                int z=ceil(p);
                if(tstamp[j]!=-1){
                    int ind=j+z;
                    if(ind>=0 && ind<m+1 && tstamp[ind]==-1 && oper[j]+1 <= y){
                        tstamp[ind]=i+1;
                        oper[ind]=oper[j]+1;
                    }
                }
            }
            else{
                double z=p;
                if(tstamp[j]!=-1){
                    int ind = ceil(z*j);
                    if(ind>=0 && ind<m+1 && tstamp[ind]==-1 && oper[j]+1 <= y){
                        tstamp[ind]=i+1;
                        oper[ind]=oper[j]+1;
                    }
                }
            }
        }
    }
    for(int i=1;i<m+1;++i)cout<<tstamp[i]<<' ';
    cout<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
