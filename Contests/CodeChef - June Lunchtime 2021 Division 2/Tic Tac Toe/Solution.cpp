#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
int check(vector<vector<int>>& arr,int k,int n,int m){
    vector<vector<int>> mn(n,vector<int> (m,0));
    for(int i=0;i<m;++i){
        set<int> base;
        for(int j=0;j<k;++j)base.insert(arr[j][i]);
        if(base.size()==k && *(base.begin())!=0)
            mn[0][i]=*(base.rbegin());
        for(int j=k;j<n;++j){
            base.insert(arr[j][i]);
            if(base.find(arr[j-k][i])!=base.end())
                base.erase(arr[j-k][i]);
            if(base.size()==k && *(base.begin())!=0)
                mn[j-k+1][i]=*(base.rbegin());
        }
    }
    int p=INT_MAX;
    for(int i=0;i<n;++i){
        set<int> base;
        for(int j=0;j<k;++j){
            base.insert(mn[i][j]);
        }
        if(base.size() == k && *(base.begin())!=0)
            p=min(p,*(base.rbegin()));
        for(int j=k;j<m;++j){
            base.insert(mn[i][j]);
            if(base.find(mn[i][j-k]) != base.end())
                base.erase(mn[i][j-k]);
            if(base.size() == k && *(base.begin())!=0){
                p=min(p,*(base.rbegin()));
            }
        }
    }
    if(p==INT_MAX)return 0;
    return p;
}
void solve()
{
    int n,m,k,x,y;
    cin>>n>>m>>k;
    vector<vector<int>> alice(n,vector<int>(m,0));
    vector<vector<int>> bob(n,vector<int>(m,0));
    for(int i=0;i<n*m;++i){
        cin>>x>>y;
        --x,--y;
        if(i%2==0)alice[x][y]=i+1;
        else bob[x][y]=i+1;
    }
    x=check(alice,k,n,m);
    y=check(bob,k,n,m);
    if(x==0 && y==0)cout<<"Draw";
    else if(x==0)cout<<"Bob";
    else if(y==0)cout<<"Alice";
    else if(x < y)cout<<"Alice";
    else cout<<"Bob";
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
