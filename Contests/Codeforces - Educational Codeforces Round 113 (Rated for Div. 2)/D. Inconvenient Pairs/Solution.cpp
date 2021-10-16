// #pragma GCC optimization ("O3")
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
    int n,m,k,p,x,y;
    cin>>n>>m>>k;
    set<int> h,v;
    for(int i=0;i<n;++i){
        cin>>p; 
        v.insert(p);
    }
    for(int j=0;j<m;++j){
        cin>>p;
        h.insert(p);
    }
    vector<pair<int,int>> oh;
    vector<pair<int,int>> ov;
    for(int i=0;i<k;++i){
        cin>>x>>y;
        if(h.find(y)!=h.end() && v.find(x)==v.end()){
            oh.push_back({x,y});
        }
        else if(h.find(y)==h.end() && v.find(x)!=v.end()){
            ov.push_back({y,x});
        }
    }
    ll ans = 0;
    // cout<<oh.size()<<' '<<ov.size()<<endl;
    sort(oh.begin(),oh.end());
    sort(ov.begin(),ov.end());
    // for(auto e:oh)cout<<e.first<<' '<<e.second<<endl;
    // for(auto e:ov)cout<<e.first<<' '<<e.second<<endl;
    auto itr=v.begin();
    int i=0;
    for(++itr;itr!=v.end();++itr){
        map<int,int> d;
        int b=0;
        while(i<oh.size() && oh[i].first<(*itr))d[oh[i].second]++,++i,++b;
        // cout<<"~"<<b<<endl;
        for(auto e:d){
            b-=e.second;
            ans+=(ll)b*e.second;
        }
    }
    // cout<<ans<<endl;
    itr=h.begin();
    i=0;
    for(++itr;itr!=h.end();++itr){
        map<int,int> d;
        int b=0;
        while(i<ov.size() && ov[i].first<(*itr))d[ov[i].second]++,++i,++b;
        // cout<<'~'<<b<<endl;
        // for(auto e:d)cout<<e.second<<' ';cout<<endl;
        for(auto e:d){
            b-=e.second;
            ans+=(ll)b*e.second;
        }
    }
    // cout<<'!'<<ans<<endl;
    cout<<ans<<endl;
    
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
