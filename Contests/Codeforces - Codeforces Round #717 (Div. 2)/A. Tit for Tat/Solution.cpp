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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;++i)cin>>arr[i];
    for(int i=0;i<n-1;++i){
        if(k>arr[i]){
            arr[n-1]+=arr[i];
            k-=arr[i];
            arr[i]=0;
        }
        else{
            arr[n-1]+=k;
            arr[i]-=k;
            k=0;
        }
    }
    for(int e:arr)cout<<e<<' ';
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
