#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> black;
    vector<pair<int,int>> white;
    bool t=false;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if((i+j)%2==0)black.push_back({i,j});
            else white.push_back({i,j});
        }
    }
    int x=0,y=0;
    int p;
    for(int i=0;i<n*n;++i){
        cin>>p;
        if(p==1){
            if(x<black.size()){
                cout<<2<<' '<<black[x].first+1<<' '<<black[x].second+1<<endl;
                ++x;
            }
            else{
                cout<<3<<' '<<white[y].first+1<<' '<<white[y].second+1<<endl;
                ++y;
            }
        }
        else if(p==2){
            if(y<white.size()){
                cout<<1<<' '<<white[y].first+1<<' '<<white[y].second+1<<endl;
                ++y;
            }
            else{
                cout<<3<<' '<<black[x].first+1<<' '<<black[x].second+1<<endl;
                ++x;
            }
        }
        else if(p==3){
            if(x<black.size()){
                cout<<2<<' '<<black[x].first+1<<' '<<black[x].second+1<<endl;
                ++x;
            }
            else{
                cout<<1<<' '<<white[y].first+1<<' '<<white[y].second+1<<endl;
                ++y;
            }
        }
    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
