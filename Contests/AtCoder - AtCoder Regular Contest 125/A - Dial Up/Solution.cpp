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
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<m;++i)cin>>b[i];
    set<int> x,y;
    for(int e:a)x.insert(e);
    for(int e:b)y.insert(e);
    if(x.size()==1 && y.size()==1){
        if(*(x.begin())==*(y.begin())){
            cout<<m<<endl;return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    if(y.size()==1){
        int p=0,q=*(x.begin());
        for(int i=0;i<n;++i){
            if(q==a[i]){
                break;
            }
            ++p;
        }
        cout<<m+p<<endl;
    }
    if(x.size()==1){
        cout<<-1<<endl;
        return;
    }
    int p=-1,q=-1;
    for(int i=0;i<n-1;++i){
        if(a[i]==0 && a[i+1]==1 && p==-1)p=i;
        if(a[i]==1 && b[i+1]==0 && q==-1)q=i;
    }
    int ans = 0;
    int c=0;
    cout<<p<<' '<<q<<endl;
    for(int i=0;i<m-1;++i){
        if(a[i]!=a[i+1])++c;
    }
    if(b[0]==1){
        if(p==-1)ans=q;
        else if(q==-1)ans=p+1;
        else ans=min(q,p+1);
        ans=ans+c+m;
    }
    if(b[0]==0){
        if(p==-1)ans=q+1;
        else if(q==-1)ans=p;
        else ans=min(p,q+1);
        ans=ans+m+c;
    }
    cout<<c<<endl;
    cout<<ans<<endl;
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
