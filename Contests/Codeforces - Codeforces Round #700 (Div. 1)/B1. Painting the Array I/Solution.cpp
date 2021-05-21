#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    if(n==1){
        cout<<1<<endl;
        return;
    }
    pair<int,int> a={data[0],1};
    pair<int,int> b={data[1],1};
    for(int i=2;i<n;++i){
        if(a.first==data[i] && b.first!=data[i]){
            ++b.second;
            b.first=data[i];
        }
        else if(a.first!=data[i] && b.first==data[i]){
            ++a.second;
            a.first=data[i];
        }
        else if(a.first!=data[i] && b.first!=data[i]){
            // find who occurs first
            int j;
            for(j=i+1;j<n;++j){
                if(a.first==data[j]){
                    a.first=data[i];
                    ++a.second;
                    break;
                }
                else if(b.first==data[j]){
                    b.first=data[i];
                    ++b.second;
                    break;
                }
            }
            if(j==n){
                a.first=data[i];
                ++a.second;
            }
        }
    }
    cout<<a.second+b.second<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
