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
bool try_to_understand(int x,vector<vector<int>>& data,vector<bool>& understood,vector<int>& tt,vector<bool>& ttu){
    int p=1;
    for(int i=0;i<data[x].size();++i){
        if(understood[data[x][i]]==false){
            if(ttu[data[x][i]]==true){
                return false;
            }
            ttu[data[x][i]]=true;
            if(try_to_understand(data[x][i],data,understood,tt,ttu)){
                ttu[data[x][i]]=false;
                understood[data[x][i]]=true;
            }
            else return false;
        }
        // cout<<x<<' '<<data[x][i]<<' '<<tt[data[x][i]]<<endl;
        if(x<data[x][i])p=max(p,tt[data[x][i]]+1);
        else p=max(p,tt[data[x][i]]);
        // cout<<p<<endl;
    }
    tt[x]=p;
    return true;
}
void solve()
{
    int n;cin>>n;
    vector<vector<int>> data(n);
    for(int i=0;i<n;++i){
        int p,x;cin>>x;
        for(int j=0;j<x;++j){
            cin>>p;
            data[i].push_back(p-1);
        }
    }
    vector<bool> ttu(n,false);
    vector<bool> understood(n,false);
    vector<int> tt(n,-1);
    for(int i=0;i<n;++i){
        if(understood[i]==false){
            ttu[i]=true;
            if(try_to_understand(i,data,understood,tt,ttu)){
                ttu[i]=false;
                understood[i]=true;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    // for(int e:tt)cout<<e<<' ';cout<<endl;
    int p=1;
    for(int i=0;i<n;++i)p=max(p,tt[i]);
    cout<<p<<endl;
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
