#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<string> matA(n);
    for(int i=0;i<n;++i)
        cin>>matA[i];
    vector<string> matB(n);
    for(int i=0;i<n;++i)
        cin>>matB[i];
    for(int i=0;i<n;++i){
        if(matA[0][i]!=matB[0][i]){
            for(int j=0;j<n;++j)
                matA[j][i] = matA[j][i] == '0' ? '1' : '0';
        }
    }
    for(int i=1;i<n;++i){
        if(matA[i][0]!=matB[i][0]){
            for(int j=0;j<n;++j)
                matA[i][j] = matA[i][j] == '0' ? '1' : '0';
        }
    }
    if(matA==matB)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
