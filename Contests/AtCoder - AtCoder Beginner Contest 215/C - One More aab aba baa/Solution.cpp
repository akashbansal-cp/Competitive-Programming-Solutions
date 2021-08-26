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
set<string> ans;
void gofor(string& z,int p,vector<bool>& mark,string& inp,int k){
    if(p==inp.length()){
        // cout<<z<<endl;
        ans.insert(z);
        return;
    }
    for(int i=0;i<mark.size();++i){
        if(mark[i]==false){
            z[p]=inp[i];
            mark[i]=true;
            gofor(z,p+1,mark,inp,k);
            if(ans.size()==k)return;
            mark[i]=false;
        }
    }
}
void solve()
{
    string s;
    cin>>s;
    int k;cin>>k;
    vector<bool> mark(s.length(),false);
    sort(s.begin(),s.end());
    string p=s;
    gofor(p,0,mark,s,k);
    cout<<*(ans.rbegin())<<endl;
}
int main()
{
    fio
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
