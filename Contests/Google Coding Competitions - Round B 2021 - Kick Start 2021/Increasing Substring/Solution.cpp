#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans(n);
    ans[0]=1;
    for(int i=1;i<n;++i){
        if(s[i-1] < s[i])ans[i]=ans[i-1]+1;
        else ans[i]=1;
    }
    cout<<"Case #"<<t<<": ";
    for(int e:ans)cout<<e<<' ';
    cout<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    int p=1;
    while (t--){
        solve(p);
        ++p;
    }
    return 0;
}
