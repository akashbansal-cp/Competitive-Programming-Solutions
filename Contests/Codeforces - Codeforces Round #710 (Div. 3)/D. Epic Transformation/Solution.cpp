#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,temp;
    cin>>n;
    map<int,int> data;
    for(int i=0;i<n;++i){
        cin>>temp;
        data[temp]++;
    }
    int p=0;
    for(auto e:data){
        p=max(p,e.second);
    }
    if(p>(n+1)/2){
        if(n%2==0){
            int x=n/2;
            cout<<2*(p-x)<<endl;
        }
        else{
            int x=n/2;
            cout<<2*(p-x)-1<<endl;
        }
    }
    else {
        if(n%2==0)cout<<0<<endl;
        else cout<<1<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
