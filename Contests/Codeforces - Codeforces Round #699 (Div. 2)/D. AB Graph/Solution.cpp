#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> edges(n);
    for(int i=0;i<n;++i)
        cin>>edges[i];
    if(m%2==1){
        cout<<"YES"<<endl;
        int c=1;
        for(int i=0;i<m+1;++i){
            if(c%2==0)
                cout<<2<<' ';
            else
                cout<<1<<' ';
            ++c;
        }
        cout<<endl;
        return;
    }
    else{
        // detect cycle
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(edges[i][j]==edges[j][i]){
                    bool t=false;
                    cout<<"YES"<<endl;
                    for(int k=0;k<m+1;++k){
                        if(t)
                            cout<<i+1<<' ';
                        else
                            cout<<j+1<<' ';
                        t=!t;
                    }
                    cout<<endl;
                    return;
                }
            }
        }
        // try to find complete cycle of all nodes
        if(n>2){
            pair<int,int> d;
            for(int i=1;i<n;++i){
                for(int j=0;j<n;++j){
                    if(i!=j && edges[i][j]==edges[0][i]){
                        d={i,j};
                        goto out;
                    }
                }
            }
    out:
            cout<<d.first<<d.second<<endl;
            if((m/2)%2==0){
                cout<<"YES"<<endl;
                cout<<d.first<<' ';
                for(int i=1;i<=m;i+=4){
                    cout<<d.second<<' '<<d.first<<' '<<1<<' '<<d.first<<' ';
                }
                cout<<endl;
                return;
            }
            else{
                cout<<"YES"<<endl;
                cout<<1<<' '<<d.first<<' '<<d.second<<' ';
                for(int i=3;i<=m;i+=4){
                    cout<<d.first<<' '<<1<<' '<<d.first<<' '<<d.second<<' ';
                }
                cout<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int z;
    cin >> z;
    while (z--)
        solve();
    return 0;
}
