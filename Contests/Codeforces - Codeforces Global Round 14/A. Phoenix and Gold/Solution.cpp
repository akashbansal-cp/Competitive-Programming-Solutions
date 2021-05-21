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
    int n,x;
    int sum=0;
    cin>>n>>x;
    vector<int> wt(n);
    for(int i=0;i<n;++i){
        cin>>wt[i];
        sum+=wt[i];
    }
    sort(wt.begin(),wt.end());
    if(sum==x){cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
    if(sum<x){
        for(int e:wt)cout<<e<<' ';cout<<endl;return;
    }
    int z=-1;
    int new_sum=0;
    for(int e:wt){
        if(new_sum+e!=x){
            new_sum+=e;
            cout<<e<<' ';
        }
        else{
            z=e;
        }
    }
    if(z!=-1)cout<<z;
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
