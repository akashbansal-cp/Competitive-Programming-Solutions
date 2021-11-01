#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define pa(x,a,b) cout<<"Case #"<<x<<": "<<a<<' '<<b<<endl;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int k;cin>>k;
    vector<pair<ll,ll>> x(k),y(k);
    ll fax=0,fay=0;
    for(int i=0;i<k;++i){
        cin>>x[i].first>>y[i].first>>x[i].second>>y[i].second;
        x[i].first+=1e9,x[i].second+=1e9,y[i].first+=1e9,y[i].second+=1e9;
        x[i].first++,x[i].second++,y[i].first++,y[i].second++;
        fax+=x[i].first,fay+=y[i].first;
    }
    multiset<pair<ll,bool>> data;
    multiset<pair<ll,bool>> d;
    for(int i=0;i<k;++i){
        data.insert({x[i].first,true});
        data.insert({x[i].second,false});
        d.insert({y[i].first,true});
        d.insert({y[i].second,false});
    }
    ll b=0,a=k,cx=0,fx=0,l1=fax;
    for(auto itr = data.begin();itr!=data.end();++itr){
        ll p=itr->first-cx;
        cx=itr->first;
        ll m=p*(b-a);
        fax+=m;
        if(fax < l1){
            l1=fax;
            fx=cx;
        }
        a-=itr->second;
        b+=(!itr->second);
    }
    b=0,a=k;
    ll cy=0,fy=0,l2=fay;
    for(auto itr = d.begin();itr!=d.end();++itr){
        ll p=itr->first-cy;
        cy=itr->first;
        ll m=p*(b-a);
        fay+=m;
        if(fay < l2){
            l2=fay;
            fy=cy;
        }
        a-=itr->second;
        b+=(!itr->second);
    }
    pa(t,fx-1e9-1,fy-1e9-1);
}
int main()
{
    fio
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)
        solve(i);
    return 0;
}
