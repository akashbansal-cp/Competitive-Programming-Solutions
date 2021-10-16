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
int csb(int k){
    int ans =0;
    while(k!=0){
        if(k&1)++ans;
        k>>=1;
    }
    return ans;
}
void solve()
{
    int n,m;cin>>n>>m;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    map<int,vector<int>> d;
    int p=0;
    for(int i=0;i<n;++i){
        p+=data[i];
        p%=m;
        d[p].push_back(i);
    }
    int no=50,x,y,z;
    for(int e:d[0]){
        no=min(no,csb(n-e-1));
    }
    for(auto e:d){
        if(e.first==0)continue;
        if(e.second.size() >= 2){
            for(int i=0;i<e.second.size();++i){
                for(int j=i+1;j<e.second.size();++j){
                    x=e.second[i]+1,y=n-e.second[j]-1;
                    z=(x&y); 
                    if(z==x){
                        no=min(no,csb(y));
                    }
                }
            }
        }
    }
    // for(int e:d[0]){
    //     no=min(no,csb(n-e-1));
    // }
    // p=0;
    // for(int i=0;i<n-1;++i){
    //     p+=data[i];
    //     p%=m;
    //     for(int e:d[p]){
    //         if(e > i){
    //             if((i+1)&(n-e-1) == (i+1)){
    //                 no=min(no,csb(n-e-1));
    //             }
    //         }
    //     }
    // }
    if(no==50)cout<<-1<<endl;
    else cout<<no<<endl;

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
