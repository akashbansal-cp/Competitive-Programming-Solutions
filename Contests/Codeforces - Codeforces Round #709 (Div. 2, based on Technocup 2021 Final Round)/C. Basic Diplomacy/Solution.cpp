#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> data(m);
    for(int i=0;i<m;++i){
        int t,temp;
        cin>>t;
        for(int j=0;j<t;++j){
            cin>>temp;
            data[i].push_back(temp);
        }
    }
    vector<int> values(m,-1);
    vector<int> frnd(n,0);
    for(int i=0;i<m;++i){
        if(data[i].size()==1){
            values[i]=data[i][0];
            frnd[data[i][0]-1]++;
        }
    }
    int mx=(m+1)/2;
    for(int i=0;i<n;++i){
        if(frnd[i]>mx){
            cout<<"NO"<<endl;return;
        }
    }
    for(int i=0;i<m;++i){
        if(values[i]==-1){
            int k=0;
            for(int k=0;k<data[i].size();++k){
                if(frnd[data[i][k]-1]<mx){
                    frnd[data[i][k]-1]++;
                    values[i]=data[i][k];
                    break;
                }
            }
            if(k==data[i].size()){
                cout<<"NO"<<endl;return;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int e:values)cout<<e<<' ';cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
