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
set<int> pr;
void solve()
{
    int n,sum=0;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i){
        cin>>data[i];
        sum+=data[i];
    }
    if(pr.find(sum)==pr.end()){
        cout<<n<<endl;
        for(int i=1;i<=n;++i)cout<<i<<' ';
        cout<<endl;
        return;
    }
    for(int i=0;i<n;++i){
        if(pr.find(sum-data[i])==pr.end()){
            cout<<n-1<<endl;
            for(int j=1;j<=n;++j){
                if(j!=i+1)cout<<j<<' ';
            }
            cout<<endl;
            return;
        }
    }
}
int main()
{
    vector<bool> p(20001,true);
    p[0]=p[1]=false;
    for(int i=2;i<20001;++i){
        if(p[i]==true){
            for(int j=2*i;j<20001;j+=i){
                p[j]=false;
            }
        }
    }
    for(int i=2;i<20001;++i){
        if(p[i])pr.insert(i);
    }
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
