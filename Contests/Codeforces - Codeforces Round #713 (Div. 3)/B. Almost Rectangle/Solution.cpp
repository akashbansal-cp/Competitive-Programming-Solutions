#include <bits/stdc++.h>
using namespace std;
void solve()
{
    pair<int,int> x;
    pair<int,int> y;
    int n;
    cin>>n;
    bool t=false;
    vector<string> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(data[i][j]=='*'){
                if(t==false){
                    y={i,j};
                    t=true;
                }
                else{
                    x={i,j};
                }
            }
        }
    }
    if(x.first==y.first){
        if(x.first==n-1)--x.first,--y.first;
        else ++x.first,++y.first;
    }
    else  if(x.second==y.second){
        if(y.second==n-1)--x.second,--y.second;
        else ++x.second,++y.second;
    }
    else{
        swap(x.second,y.second);
    }
    data[x.first][x.second]='*';
    data[y.first][y.second]='*';
    for(string s:data)cout<<s<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
