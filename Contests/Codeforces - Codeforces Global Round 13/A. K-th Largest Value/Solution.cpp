#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int temp;
    pair<int,int> occ;
    occ={0,0};
    vector<int> data(n);
    for(int i=0;i<n;++i){
        cin>>temp;
        data[i]=temp;
        if(temp==0)
            ++occ.first;
        else
            ++occ.second;
    }
    int x,y;
    for(int i=0;i<k;++i){
        cin>>x>>y;
        if(x==1){
            if(data[y-1]==0){
                data[y-1]=1;
                --occ.first,++occ.second;
            }
            else{
                data[y-1]=0;
                --occ.second,++occ.first;
            }
        }
        else{
            if(y<=occ.second)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }

    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
