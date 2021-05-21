#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int r,c;
    cin>>r>>c;
    vector<string> data(r);
    for(int i=0;i<r;++i)cin>>data[i];
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(data[i][j]=='.')data[i][j]='D';
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c-1;j++){
            if((data[i][j]=='W' && data[i][j+1]=='S') || (data[i][j]=='S' && data[i][j+1]=='W')){
                // cout<<i<<j<<'2';
                cout<<"No"<<endl;
                return;
            }
        }
    }
    for(int i=0;i<r-1;++i){
        for(int j=0;j<c;++j){
            if((data[i][j]=='W' && data[i+1][j]=='S') || (data[i][j]=='S' && data[i+1][j]=='W')){
                // cout<<i<<j<<'s';
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<r;++i)cout<<data[i]<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
