#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> data(n,vector<int> (m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j)
            cin>>data[i][j];
    }
    vector<pair<int,int>> fault(n);
    int limit=0;
    vector<int> X;
    vector<int> ans=data[0];
    for(int i=0;i<n;++i){
        int k=0;
        for(int j=0;j<m;++j){
            if(ans[j]!=data[i][j]){
                ++k;
                if(k==0)
                    continue;
                else if(k==1){
                    limit=max(limit,1);
                    fault[i]={data[i][j],-1};
                    X.push_back(i);
                }
                else if(k==2){
                    limit=max(limit,2);
                    fault[i].second=data[i][j];
                }
                else if(k==3){
                    if(limit==2){
                        for(int e:X){
                            if(fault[e].first==data[i][j]){
                                fault[e].first=fault[e].second;
                                fault[e].second=-1;
                            }
                            else if(fault[e].second==data[i][j]){
                                fault[e].second=-1;
                            }
                        }
                        if(X.size()==0)
                            --limit;
                        //end the program
                        cout<<"No"<<endl;
                        return;
                    }
                    else{
                        ++limit;
                        ans[j]=data[i][j];
                    }
                    --k;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<m;++i)
        cout<<ans[i]<<' ';
    cout<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}