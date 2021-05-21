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
    int n,q;
    cin>>n>>q;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<int> bits(31,0);
    vector<int> temp=data;
    for(int i=0;i<n;++i){
        for(int j=30;j>=0;--j){
            if(temp[i] >= pow(2,j)){
                bits[j]++;
                temp[i]-=pow(2,j);
            }
        }
    }
    int ans=0;
    for(int i=0;i<31;++i){
        if(bits[i]!=0){
            ans+=pow(2,i);
        }
    }
    cout<<ans<<endl;
    int x,v;
    for(int i=0;i<q;++i){
        cin>>x>>v;
        int p=data[x-1];
        data[x-1]=v;
        for(int j=30;j>=0;--j){
            if(p>=pow(2,j)){
                bits[j]--;
                p-=pow(2,j);
            }
            if(v>=pow(2,j)){
                bits[j]++;
                v-=pow(2,j);
            }
        }
        ans=0;
        for(int j=0;j<31;++j){
            if(bits[j]!=0){
                ans+=pow(2,j);
            }
        }
        cout<<ans<<endl;
    }
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
