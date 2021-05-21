#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> per(n);
    for(int i=0;i<n;++i)
        cin>>per[i];
    int u;
    double v;
    vector<pair<int,double>> exp(m);
    for(int i=0;i<m;++i){
        cin>>u>>v;
        exp[i].first=u,exp[i].second=v;
    }
    // sort(exp.begin(),exp.end());
    double total_prob=0;
    double curr_prob=1;
    int sorted = n+1;
    for(int i=n-1;i>=0;--i){
        if(per[i] == i+1)
            sorted=i+1;
        else break;
    }
    if(sorted == 1){
        cout<<fixed<<setprecision(6)<<1.0<<endl;
        return;
    }
    for(int i=m-1;i>=0;--i){
        if(exp[i].first >= sorted-1){
            // if sorted
            total_prob += exp[i].second*curr_prob;
            // if not sorted
            curr_prob*=((double)1-exp[i].second);
        }
    }
    cout<<fixed<<setprecision(6) <<total_prob<<endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
