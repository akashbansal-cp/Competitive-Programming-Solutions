#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    set<int> a;
    set<int> b;
    for(int i=0;i<n-1;++i){
        if(data[i]<=data[i+1])a.insert(data[i+1]-data[i]);
        else b.insert(data[i]-data[i+1]);
    }
    if(a.size()>1 || b.size()>1){
        cout<<-1<<endl;return;
    }
    if(b.size()==0 || a.size()==0){
        cout<<0<<endl;
        return;
    }
    int c=*a.begin();
    int m=c+*b.begin();
    for(int e:data){
        if(e>=m){
            cout<<-1<<endl;return;
        }
    }
    cout<<m<<' '<<c<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
