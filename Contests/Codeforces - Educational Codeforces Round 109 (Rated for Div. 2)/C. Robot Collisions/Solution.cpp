#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve2(vector<vector<int>>& data,vector<int>& ans,int m){
    pair<int,int> p;
    pair<int,int> q;
    int s;
    stack<vector<int>> stck;
    for(int i=0;i<data.size();++i){
        if(stck.empty()==true)stck.push(data[i]);
        else{
            if(stck.top()[1]=='R' && data[i][1]=='L'){
                p={stck.top()[0],data[i][0]};
                q={stck.top()[2],data[i][2]};
                s=p.second-p.first;
                s/=2;
                ans[q.first]=s,ans[q.second]=s;
                stck.pop();                
            }
            else{
                stck.push(data[i]);
            }
        }
    }
    data={};
    while(stck.empty()==false){
        data.push_back(stck.top());
        stck.pop();
    }
    reverse(data.begin(),data.end());
    int i=1;
    for(;i<data.size();i+=2){
        if(data[i][1]=='L'){
            p={data[i-1][0],data[i][0]};
            q={data[i-1][2],data[i][2]};
            s=(p.second-p.first)/2;
            s+=p.first;
            ans[q.first]=s,ans[q.second]=s;
        }
        else break;
    }
    if(i==data.size())return;
    if(data[i-1][1]!='R'){
        ++i;
    }
    i=data.size()-2;
    for(;i>=0;i-=2){
        if(data[i][1]=='R'){
            p={data[i][0],data[i+1][0]};
            q={data[i][2],data[i+1][2]};
            s=(p.second-p.first)/2;
            s+=(m-p.second);
            ans[q.first]=s,ans[q.second]=s;
        }
        else break;
    }
    if(i<0)return;
    int z=0;
    for(int i=0;i<data.size();++i){
        if(data[i][1]=='L')++z;
    }
    if(data.size()%2!=0 || z%2!=1){
        return;
    }
    p={data[z-1][0],data[z][0]};
    q={data[z-1][2],data[z][2]};
    s=p.first-p.second;
    s/=2;
    s+=m;
    ans[q.first]=s,ans[q.second]=s;
}
void solve()
{
    int n,m,d;
    char z;
    cin>>n>>m;
    vector<vector<int>> data(n);
    vector<int> ans(n,-1);
    for(int i=0;i<n;++i){
        cin>>d;
        data[i].push_back(d);
    }
    for(int i=0;i<n;++i){
        cin>>z;
        data[i].push_back(z);
    }
    for(int i=0;i<n;++i){
        data[i].push_back(i);
    }
    vector<vector<int>> odd;
    vector<vector<int>> even;
    for(int i=0;i<n;++i){
        if(data[i][0]%2==0)even.push_back(data[i]);
        else odd.push_back(data[i]);
    }
    sort(odd.begin(),odd.end());
    solve2(odd,ans,m);
    sort(even.begin(),even.end());
    solve2(even,ans,m);
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
