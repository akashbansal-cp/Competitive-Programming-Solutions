#define MOD 1000000007
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ncr(1001,vector<int>(1001));
int NCR(int i,int j){
    if(i<j){
        ncr[i][j]=0;
        return 0;
    }
    if(j==0){
        ncr[i][j]=1;
        return 1;
    }
    int m = ncr[i-1][j-1] == -1 ? NCR(i-1,j-1) : ncr[i-1][j-1];
    int n = ncr[i-1][j] == -1 ? NCR(i-1,j) : ncr[i-1][j];
    ncr[i][j] = (m+n)%MOD;
    return ncr[i][j];
}
void solve()
{
    for(int i=0;i<1001;++i){
        for(int j=0;j<1001;++j)
            ncr[i][j]=-1;
    }
    int n,k;
    cin>>n>>k;
    vector<int> followers(n);
    for(int i=0;i<n;++i){
        cin>>followers[i];
    }
    sort(followers.begin(),followers.end(),greater<int>());
    int m=followers[k-1];
    int i=k-1,j=k-1;
    while(i>=0 && followers[i]==m)
        --i;
    ++i;
    while(j<n && followers[j]==m)
        ++j;
    --j;
    j=j-i+1;
    i=k-i;
    int x=NCR(j,i);
    cout<< x <<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
