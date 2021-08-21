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
int main()
{
    fio
    int t;
    cin >> t;
    vector<pair<int,int>> data;
    int l=1,r=1;
    data.push_back({0,0});
    data.push_back({1,1});
    int ran=3;
    while(data.size() < 40001){
        l=r+1;
        r=l+ran-1;
        data.push_back({l,r});
        ran+=2;
    }
    // cout<<data[30000].first<<' '<<data[40000].second<<endl;
    int k;
    // for(int i=0;i<1000;++i)cout<<data[i].first<<' '<<data[i].second<<endl;
    while(t--){
        cin>>k;
        int l=1,r=40000,x;
        while(r>l){
            int md=(l+r)/2;
            // cout<<k<<' ' <<l<<' '<<r<<' '<<md<<' '<<data[md].first<<' '<<data[md].second<<endl;
            if(k>=data[md].first && k<=data[md].second){
                x=md;
                // cout<<l<<' '<<r<<' '<<k<<' '<<data[md].first<<' '<<data[md].second<<endl;
                break;
            }
            else if(k<data[md].first)r=md-1;
            else l=md+1;
        }
        if(l==r)x=l;
        // cout<<x<<' '<<data[x].first<<' '<<data[x].second<<endl;
        int mn=(data[x].first+data[x].second)/2;
        if(k==mn){
            cout<<x<<' '<<x<<endl;
        }
        else if(k>mn){
            cout<<x<<' '<<x-k+mn<<endl;
        }
        else if(k<mn){
            cout<<x-mn+k<<' '<<x<<endl;
        }
    }
    return 0;
}
