#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,temp;
    cin>>n>>k;
    multiset<int> data;
    for(int i=0;i<n;++i){
        cin>>temp;
        data.insert(temp);
    }
    if(k==0){
        set<int> p;
        for(int e:data)
            p.insert(e);
        cout<<p.size()<<endl;
        return;
    }
    //  find out mex
    int i=0;
    for(auto e:data){
        if(e!=i){
            break;
        }
        ++i;
    }
    auto itr=data.end();
    --itr;
    int j=*itr;
    // cout<<i<<' '<<j<<endl;
    int x=round(((double)i+(double)j)/2);
    // cout<<x<<endl;
    if(x!=i){
        data.insert(x);   
        set<int> p;
        for(int e:data)
            p.insert(e);
        cout<<p.size()<<endl;
        return;
    }
    else{
        set<int> p;
        for(int e:data)
            p.insert(e);
        cout<<p.size()+k<<endl;
        return;
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
