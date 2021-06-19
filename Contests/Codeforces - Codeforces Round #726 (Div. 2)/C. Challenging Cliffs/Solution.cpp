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
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    sort(data.begin(),data.end());
    vector<int> fl(n);
    fl[0]=0;
    for(int i=1;i<n;++i){
        if(data[i]==data[i-1])fl[i]=fl[i-1]+1;
        else fl[i]=fl[i-1];
    }
    int mn=fl[n-1];
    int p=0,q=data[1]-data[0];
    int x;
    for(int i=1;i<n-1;++i){
        x=fl[n-1]-fl[i];
        x+=fl[i-1];
        if(data[i+1]-data[i] < q){
            mn=x;
            q=data[i+1]-data[i];
            p=i;
        }
        else if(data[i+1]-data[i] == q){
            if(x < mn){
                mn=x;
                p=i;
            }
        }
    }
    cout<<data[p]<<' ';
    for(int i=p+2;i<n;++i)cout<<data[i]<<' ';
    for(int i=0;i<p;++i)cout<<data[i]<<' ';
    cout<<data[p+1]<<endl;
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
