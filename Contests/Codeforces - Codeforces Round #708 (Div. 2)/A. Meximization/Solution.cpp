#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    for(int i=0;i<101;++i){
        int j;
        for(j=0;j<n;++j){
            if(data[j]==i){
                cout<<data[j]<<' ';
                data[j]=-1;
                break;
            }
        }
        if(j==n){
            break;
        }
    }
    for(int e:data){
        if(e!=-1)cout<<e<<' ';
    }
    cout<<endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
