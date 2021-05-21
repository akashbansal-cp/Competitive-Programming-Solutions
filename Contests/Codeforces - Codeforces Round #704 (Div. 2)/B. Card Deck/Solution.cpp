#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    vector<bool> occ(n,true);
    int find=data.size();
    for(int i=data.size()-1;i>=0;--i){
        occ[data[i]-1]=false;
        if(data[i]==find){
            int j=i;
            while(j<data.size() && data[j]!=0){
                cout<<data[j]<<' ';
                data[j]=0;
                ++j;
            }
            while(find > 0 && occ[find-1]==false)
                --find;
        }
    }
    cout<<endl;
    // for(int e:data)
    //     cout<<e<<' ';
    // cout<<endl;
    // for(bool e:occ)
    //     cout<<e<<' ';
    // cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
