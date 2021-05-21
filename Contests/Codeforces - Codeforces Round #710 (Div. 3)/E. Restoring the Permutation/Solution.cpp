#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<int> values(n,-1);
    values[0]=data[0];
    set<int> all;all.insert(n);
    for(int i=1;i<n;++i){
        all.insert(i);
        if(data[i]!=data[i-1])values[i]=data[i];
    }
    for(int i=0;i<n;++i){
        if(values[i]!=-1)all.erase(values[i]);
    }
    vector<int> mini=values;
    int m=0;
    for(int e:all){
        while(mini[m]!=-1)++m;
        mini[m]=e;
        ++m;
    }
    for(int e:mini)cout<<e<<' ';cout<<endl;
    int p;
    for(int i=0;i<n;++i){
        if(values[i]!=-1)p=values[i];
        else{
            auto itr=all.lower_bound(p);
            --itr;
            values[i]=*itr;
            all.erase(itr);
        }
    }
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
