#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,l,r,s;
    cin>>n>>l>>r>>s;
    int x=r-l+1,sum=0;
    vector<int> p(x);
    for(int i=0;i<x;++i){
        p[i]=i+1;
        sum+=p[i];
    }
    if(sum>s){
        cout<<-1<<endl;return;
    }
    int mx=n;
    for(int i=x-1;i>=0;--i){
        sum-=p[i];
        int req=s-sum;
        if(req > mx){
            sum+=mx;
            p[i]=mx;
            --mx;
        }
        else{
            sum+=req;
            p[i]=req;
            break;
        }
    }
    if(sum!=s){
        cout<<-1<<endl;return;
    }
    vector<bool> put(n+1,false);
    for(int e:p)put[e]=true;
    x=1;
    for(int i=0;i<l-1;++i){
        while(put[x]==true)++x;
        cout<<x<<' ';
        ++x;
    }
    for(int e:p)cout<<e<<' ';
    for(int i=r+1;i<=n;++i){
        while(put[x]==true)++x;
        cout<<x<<' ';
        ++x;
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
