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
    int n,m;
    cin>>n>>m;
    vector<int> train(n);
    for(int i=0;i<n;++i)cin>>train[i];
    vector<int> reach(n,-1);
    int p=0;
    bool move=false;
    for(int i=0;i<n;++i){
        if(train[i]==0 || train[i]==2){
            if(move){
                ++p;
                if(reach[i]==-1) reach[i]=p;
                else reach[i]=min(reach[i],p);
            }
        }
        else if(train[i]==1){
            p=0;
            reach[i]=0;
            move=true;
        }
    }
    p=0,move=false;
    for(int i=n-1;i>=0;--i){
        if(train[i]==0 || train[i]==1){
            if(move){
                ++p;
                if(reach[i]==-1)reach[i]=p;
                else reach[i]=min(reach[i],p);
            }
        }
        else{
            p=0;
            reach[i]=0;
            move=true;
        }
    }
    for(int i=0;i<m;++i){
        cin>>p;
        cout<<reach[p-1]<<' ';
    }
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
