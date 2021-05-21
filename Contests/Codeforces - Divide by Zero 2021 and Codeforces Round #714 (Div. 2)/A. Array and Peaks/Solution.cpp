#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> data(n,0);
    if(k>(n-1)/2){
        cout<<-1<<endl;return;
    }
    int x=1,last=n;
    for(int i=0;i<k;++i){
        data[x]=last;
        --last;
        x+=2;
    }
    int start=1;
    for(int i=0;i<n;++i){
        if(data[i]==0){
            data[i]=start;
            ++start;
        }
    }
    for(int e:data)cout<<e<<' ';
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
