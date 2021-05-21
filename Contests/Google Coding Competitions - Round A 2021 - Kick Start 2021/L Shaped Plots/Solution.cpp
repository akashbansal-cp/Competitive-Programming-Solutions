#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> data(r,vector<int>(c));
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j)
            cin>>data[i][j];
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
