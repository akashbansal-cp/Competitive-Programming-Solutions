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
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    multiset<int,greater<int>> d;
    for(int e:data)d.insert(e);
    int p,q,x=n;
    vector<int> l;
    for(int i=0;i<n/2;++i){
        p=*(d.begin());
        d.erase(d.begin());
        q=*(d.begin());
        d.erase(d.begin());
        if(data[0]==p && data[1]==q){
            l.push_back(x);
            reverse(data.begin(),data.begin()+x);
            x-=2;
        }
        else{
            for(int j=1;j<x;++j){
                if(j%2==0 && p==data[j] && q==data[j-1]){
                    l.push_back(j+1);
                    l.push_back(x);
                    reverse(data.begin(),data.begin()+j+1);
                    reverse(data.begin(),data.begin()+x);
                    x-=2;
                }
            }
        }
        if(x==n-i*2){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<l.size()<<endl;
    for(int e:l)cout<<e<<' ';
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
