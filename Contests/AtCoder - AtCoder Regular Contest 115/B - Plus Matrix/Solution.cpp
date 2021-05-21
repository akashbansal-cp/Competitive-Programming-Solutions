#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<vector<int>> data(n,vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            cin>>data[i][j];
    }
    int x=0;
    for(int i=1;i<n;++i){
        if(data[i][0] < data[x][0])x=i;
    }
    vector<int> a(n);
    for(int i=0;i<n;++i){
        a[i]=data[i][0]-data[x][0];
    }
    vector<int> b(n);
    b[0]=data[x][0];
    for(int i=1;i<n;++i)
        b[i]=data[0][i]-a[0];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[i]+b[j]!=data[i][j]){
                cout<<"No"<<endl;return;
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int e:a)cout<<e<<' ';cout<<endl;
    for(int e:b)cout<<e<<' ';cout<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
