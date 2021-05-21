#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    set<int> occ;
    set<int> free;
    int z;
    for(int i=0;i<n;++i){
        cin>>z;
        if(z==0)free.insert(i+1);
        else occ.insert(i+1);
    }
    ll ans=0;
    for(int e:occ){
        auto itr=free.lower_bound(e);
        if(itr==free.begin()){
            ans+=(ll)((*itr)-e);
            cout<<(*itr)<<endl;
            free.erase(itr);
        }
        else if(itr==free.end()){
            --itr;
            ans+=(ll)(e-(*itr));
            cout<<(*itr)<<endl;
            free.erase(itr);
        }
        else{
            int p=*itr;
            --itr;
            int q=*itr;
            if(p-e >= e-q){
                ans+=(ll)(e-q);
                cout<<q<<endl;
                free.erase(q);
            }
            else{
                ans+=(ll)(p-e);
                cout<<p<<endl;
                free.erase(p);
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fio
    int t=1;
    while (t--)
        solve();
    return 0;
}
