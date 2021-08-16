#include<bits/stdc++.h>
using namespace std;
bool valid(int i,int j,int n,int m,vector<string>& grid){
    if(i<0 || j<0 || i>=n || j>=m)return false;
    if(grid[i][j]=='#')return false;
    return true;
}
string reachTheEnd(vector<string> grid,int maxTime){
    int n=grid.size(),m=grid[0].length();
    if(n==1 && m==1)return "Yes";
    vector<vector<int>> dp(n,vector<int>(m,0));
    queue<pair<int,int>> que;
    vector<int> x={1,0,0,-1};
    vector<int> y={0,1,-1,0};
    que.push({0,0});
    int  d=0;
    while(!que.empty()){
        int s = que.size();
        for(int i=0;i<s;++i){
            int _x=que.front().first,_y=que.front().second;
            que.pop();
            if(dp[_x][_y])
                continue;
            dp[_x][_y]=d;
            for(int j=0;j<4;++j){
                int nx = _x+x[j],ny = _y+y[j];
                if(valid(nx,ny,n,m,grid)){
                    que.push({nx,ny});
                }
            }
        }
        ++d;
    }
    if(dp[n-1][m-1] <= maxTime)return "Yes";
    return "No";
}