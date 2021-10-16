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
    int n,m;cin>>n;
    ll sum=0;
    vector<vector<int>> data(n);
    vector<int> c(n);
    for(int i=0;i<n;++i){
        cin>>m;
        data[i].resize(m);
        for(int j=0;j<m;++j)cin>>data[i][j];
        sum+=data[i][m-1];
        c[i]=m-1;
    }
    cin>>m;
    set<vector<int>> ban;
    for(int i=0;i<m;++i){
        vector<int> b(n);
        for(int j=0;j<n;++j){
            cin>>b[j];
            --b[j];
        }
        ban.insert(b);    
    }
    if(ban.find(c)==ban.end()){
        for(int e:c)cout<<e+1<<' ';cout<<endl;
        return;
    }
    sum=0;
    pair<set<vector<int>>::iterator,int> info;
    for(auto itr=ban.begin();itr!=ban.end();++itr){
        vector<int> p=*itr;
        ll s=0;
        for(int i=0;i<n;++i){
            s+=data[i][p[i]];
        }
        for(int i=0;i<n;++i){
            if(p[i]!=0){
                p[i]--;
                if((s+data[i][p[i]]-data[i][p[i]+1]) > sum && ban.find(p)==ban.end()){
                    info={itr,i};
                    sum=s+data[i][p[i]]-data[i][p[i]+1];
                }
                p[i]++;
            }
        }
    }
    vector<int> p=*(info.first);
    int x=info.second;
    for(int i=0;i<n;++i){
        if(i!=x)cout<<p[i]+1<<' ';
        else cout<<p[i]<<' ';
    }
    cout<<endl;
}
int main()
{
    fio
    solve();
    return 0;
}
