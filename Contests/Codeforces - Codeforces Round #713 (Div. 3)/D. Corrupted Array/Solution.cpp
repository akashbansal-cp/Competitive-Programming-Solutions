#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> data(n+2);
    for(int i=0;i<n+2;++i)cin>>data[i];
    sort(data.begin(),data.end());
    ll sum=0;
    for(int i=0;i<n+1;++i)sum+=data[i];
    for(int i=0;i<n+1;++i){
        if(sum-data[i]==data[n+1]){
            //ans;
            for(int j=0;j<n+1;++j){
                if(i!=j){
                    cout<<data[j]<<' ';
                }
            }
            cout<<endl;
            return;
        }
    }
    sum-=data[n];
    if(sum==data[n]){
        //ans
        for(int i=0;i<n;++i){
            cout<<data[i]<<' ';
        }
        cout<<endl;
        return;
    }
    cout<<-1<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
