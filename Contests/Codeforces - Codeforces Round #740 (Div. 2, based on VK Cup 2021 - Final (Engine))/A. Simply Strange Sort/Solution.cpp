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
    vector<int> s=data;
    sort(s.begin(),s.end());
    int i=0;
    while(s!=data){
        ++i;
        if(i%2==1){
            for(int x=0;x+1<n;x+=2){
                if(data[x] > data[x+1])swap(data[x],data[x+1]);
            }
        }
        else{
            for(int x=1;x+1<n;x+=2){
                if(data[x] > data[x+1])swap(data[x],data[x+1]);
            }
        }
        // for(int e:data)cout<<e<<' ';cout<<endl;
    }
    cout<<i<<endl;
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
