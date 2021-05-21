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
    vector<int> ans;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    int i=0,x,y;
    while(i+2<n){
        x=0;
        x=data[i]+data[i+1]+data[i+2];
        if(x<2){
            ans.push_back(0);
            ans.push_back(0);
        }
        else{
            ans.push_back(1);
            ans.push_back(1);
        }
        i+=3;
    }
    if(i+2==n){
        x=data[i]+data[i+1];
        if(x==0){
            ans.push_back(0);
            ans.push_back(0);
        }
        if(x==1)ans.push_back(0);
        if(x==2){
            ans.push_back(1);
            ans.push_back(1);
        }
    }
    cout<<ans.size()<<endl;
    for(int e:ans)cout<<e<<' ';
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
