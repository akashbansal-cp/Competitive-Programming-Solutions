#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void gofor(string& s,int i,int n){
    if(i==n){
        ans.push_back(s);
        return;
    }
    if(ans.size()==n+1)return;
    gofor(s,i+1,n);
    if(ans.size()==n+1)return;
    if(s[i]=='0'){
        s[i]='1';
        gofor(s,i+1,n);
        if(ans.size()==n+1)return;
        s[i]='0';
    }
}
void solve()
{
    ans={};
    int n;cin>>n;
    vector<string> d(n);
    for(int i=0;i<n;++i)cin>>d[i];
    sort(d.begin(),d.end());
    string a="";
    for(int i=0;i<n;++i)a+='0';
    gofor(a,0,n);
    // cout<<"--"<<ans.size()<<endl;
    // for(auto e:ans)cout<<e<<endl;
    for(int i=0;i<n;++i){
        if(ans[i]!=d[i]){
            cout<<ans[i]<<endl;
            return;
        }
    }
    cout<<ans[n]<<endl;
    return;
}
int main()
{
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
