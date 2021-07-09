#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll black=0,white=0;
bool checkBipartite(vector<vector<int>>& edges,int n,vector<int>& nodes){
    vector<char> color(n,'u');
    stack<int> data;
    data.push(0);
    int x;
    color[0]='b';
    while(data.empty()==false){
        x=data.top();
        data.pop();
        for(int i=0;i<edges[x].size();++i){
            if(color[edges[x][i]]=='u'){
                data.push(edges[x][i]);
                color[edges[x][i]]=color[x]=='b'?'w':'b';
            }   
            else if(color[x]==color[edges[x][i]])return false;
        }
    }
    // for(auto e:color)cout<<e<<' ';cout<<endl;
    black=0,white=0;
    for(int i=0;i<n;++i){
        if(color[i]=='b')black+=nodes[i];
        else white+=nodes[i];
    }
    return true;
}
void solve()
{
    int n,m,x,y;
    cin>>n>>m;
    vector<int> nodes(n,0);
    for(int i=0;i<n;++i)cin>>nodes[i];
    for(int i=0;i<n;++i){
        cin>>x;
        nodes[i]-=x;
    }
    vector<vector<int>> edges(n);
    for(int i=0;i<m;++i){
        cin>>x>>y;
        --x,--y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    if(checkBipartite(edges,n,nodes)==true){
        // cout<<black<<' '<<white<<endl;
        if(black==white){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else{
        white=0;
        for(int i=0;i<n;++i)white+=nodes[i];
        if(white%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return  ;

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
