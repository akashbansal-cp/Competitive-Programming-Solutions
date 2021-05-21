#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int tmp,r,c,x;
    cin>>r>>c>>x;
    vector<vector<pair<int,int>>> data(r,vector<pair<int,int>>(c,{0,0}));
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>tmp;
            data[i][j].first=tmp;
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>tmp;
            data[i][j].first-=tmp;
        }
    }
    int p=0;
    for(int i=0;i<r;++i){
        int j;
        //initial  p repersents the value which has to be decreased from current value
        for(j=0;j<=c-x;++j){
            data[i][j].first-=p;
            p=p+data[i][j].second;
            data[i][j+x-1].second=-data[i][j].first;
            p+=data[i][j].first;
            data[i][j].first=0;
            data[i][j].second=0;
        }
        while(j<c){
            data[i][j].first-=p;
            p+=data[i][j].second;
            data[i][j].second=0;
            ++j;
        }
    }
    p=0;
    for(int i=0;i<c;++i){
        int j;
        for(j=0;j<=r-x;++j){
            data[j][i].first-=p;
            p+=data[j][i].second;
            data[j+x-1][i].second=-data[j][i].first;
            p+=data[j][i].first;
            data[j][i].first=0;
            data[j][i].second=0;
        }
        while(j<r){
            data[j][i].first-=p;
            p+=data[j][i].second;
            data[j][i].second=0;
            ++j;
        }
    }
    bool ans=true;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(data[i][j].first!=0){
                ans=false;
            }
            // cout<<data[i][j].first<<' ';
        }
        // cout<<endl;
    }
    if(ans)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
