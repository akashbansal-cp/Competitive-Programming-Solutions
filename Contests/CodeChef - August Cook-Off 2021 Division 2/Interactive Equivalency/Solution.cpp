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
    int n,q;cin>>n>>q;
    vector<bool> dis(n+1,false);
    vector<int> rep(n+1,-1);
    dis[1]=true;
    int freq;
    vector<int> d;
    d.push_back(1);
    for(int i=2;i<=n;++i){
        cout<<"? "<<d.size()+1<<' ';
        for(int e:d)cout<<e<<' ';
        cout<<i<<endl;
        cin>>freq;
        if(freq==1){
            d.push_back(i);
            dis[i]=true;
        }
    }
    for(int i=1;i<=n;++i){
        if(dis[i]==false){
            int l=0,r=d.size()-1;
            while(r-l > 1){
                int md=(l+r)/2;
                cout<<"? "<<md-l+2<<' ';
                for(int x=l;x<=md;++x)cout<<d[x]<<' ';
                cout<<i<<endl;
                cin>>freq;
                if(freq==1){
                    l=md+1;
                }
                else r=md;
            }
            if(l!=r){
                cout<<"? "<<2<<' '<<d[l]<<' '<<i<<endl;
                cin>>freq;
                if(freq==1)l=r;
            }
            rep[i]=d[l];
        }
    }
    for(int i=1;i<=n;++i){
        if(rep[i]==-1)rep[i]=i;
    }
    cout<<"! ";
    for(int i=1;i<=n;++i)cout<<rep[i]<<' ';
    cout<<endl;
    int ans = 0;
    cin>>ans;
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
