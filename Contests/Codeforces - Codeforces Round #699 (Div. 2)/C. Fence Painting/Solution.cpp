#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(m);
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<n;++i)
        cin>>b[i];
    for(int i=0;i<m;++i){
        cin>>c[i];
    }
    map<int,int> color;
    map<int,vector<int>> plnk;
    for(int i=0;i<n;++i){
        if(a[i]!=b[i]){
            color[b[i]]++;
            plnk[b[i]].push_back(i);
        }
    }
    vector<int> assign(m);
    int up=-1;
    // verify ultimate plank
    if(color[c[m-1]]==0){
        for(int i=0;i<n;++i){
            if(b[i]==c[m-1]){
                up=i;
                break;
            }
        }
    }
    else{
        up=plnk[c[m-1]].back();
    }
    if(up==-1){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=m-1;i>=0;--i){
        if(color[c[i]]!=0){
            --color[c[i]];
            assign[i]=plnk[c[i]][plnk[c[i]].size()-1];
            plnk[c[i]].pop_back();
        }
        else{
            assign[i]=up;
        }
    }
    for(auto e:color){
        if(e.second!=0){

        cout<<"NO"<<endl;
        return;
        }
    }
    cout<<"YES"<<endl;
    for(int e:assign)
        cout<<e+1<<' ';
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
