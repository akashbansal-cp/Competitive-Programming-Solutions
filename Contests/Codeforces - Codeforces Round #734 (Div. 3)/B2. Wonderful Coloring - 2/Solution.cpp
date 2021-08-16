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
    int n,k;cin>>n>>k;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    map<int,vector<int>> d;
    for(int i=0;i<n;++i){
        d[data[i]].push_back(i);
    }
    vector<int> clr(n,0);
    int cc=1;
    for(auto e:d){
        if(e.second.size()>=k){
            for(int i=0;i<e.second.size();++i){
                if(i<k)clr[e.second[i]]=i+1;
                else break;
            }
        }
        else{
            for(int i=0;i<e.second.size();++i){
                clr[e.second[i]]=cc;
                ++cc;
                if(cc > k)cc-=k;
            }
        }
    }
    vector<int> count(k,0);
    for(int i=0;i<n;++i){
        if(clr[i]!=0)count[clr[i]-1]++;
    }
    // for(int e:count)cout<<e<<' ';
    // cout<<endl;
    int y=count[0];
    for(int i=1;i<k;++i){
        y=min(y,count[i]);
    }
    vector<int> cp(k,0);
    for(int i=0;i<n;++i){
        if(clr[i]==0)cout<<0<<' ';
        else{
            if(cp[clr[i]-1] == y)cout<<0<<' ';
            else{
                cout<<clr[i]<<' ';
                cp[clr[i]-1]++;
            } 
        }
    }
    cout<<endl;
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
