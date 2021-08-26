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
    int n;cin>>n;
    int temp;
    set<int> d;
    map<int,int> data;
    for(int i=0;i<n;++i){
        cin>>temp;
        data[temp]++;
        d.insert(temp);
    }
    if(d.size() >= 6){
        cout<<0<<endl;
        return;
    }
    for(auto e:data){
        if(e.first!=-1 && e.first!=0 && e.first!=1){
            if(e.second > 1){
                cout<<0<<endl;
                return;
            }
        }
    }
    int p=0;
    vector<int> z;
    for(int e:d){
        if(e==-1){
            if(data[-1] > 1 && data[1]==0){
                cout<<0<<endl;
                return;
            }
        }
        if(e > 1){
            ++p;
            z.push_back(e);
        }
        if(e < -1){
            ++p;
            z.push_back(e);
        }
    }
    if(p>=2){
        cout<<0<<endl;
        return;
    }
    if(p==0){
        cout<<1<<endl;
        return;
    }
    if(data[-1]!=0){
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
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
