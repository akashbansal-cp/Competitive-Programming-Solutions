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
void solve()
{
    string t;cin>>t;
    int n=t.length();
    vector<vector<int>> dp(n,vector<int>(26,0));
    dp[0][t[0]-'a']=1;
    for(int i=1;i<n;++i){
        for(int j=0;j<26;++j){
            if(t[i]-'a'==j){
                dp[i][j]=dp[i-1][j]+1;
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    int p=0;
    for(int e:dp[n-1])if(e!=0)++p;
    vector<int> occ(26,0);
    vector<bool> found(26,false);
    string rem="";
    int x=n-1;
    string checker="";
    for(int i=0;i<p;++i){
        vector<int> o(26,0);
        char curr='$';
        int l=0;
        string tc="";
        while(occ!=o || curr=='$'){
            ++l;
            if(x < 0){
                cout<<-1<<endl;
                return;
            }
            if(found[t[x]-'a']==false){
                if(curr=='$'){
                    curr=t[x];
                    found[t[x]-'a']=true;
                    if(dp[x][t[x]-'a']%(p-i)!=0){
                        cout<<-1<<endl;
                        return;
                    }
                    else{
                        occ[t[x]-'a']=dp[x][t[x]-'a']/(p-i);
                    }
                    rem+=t[x];
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
            if(t[x]!=curr)tc+=t[x];
            o[t[x]-'a']++;
            --x;
        }
        reverse(tc.begin(),tc.end());
        if(checker!=tc){
            cout<<-1<<endl;
            return;
        }
        checker=t.substr(x+1,l);
    }
    if(x!=-1){
        cout<<-1<<endl;
        return;
    }
    int ans = 0;
    vector<int> oc(26,0);
    reverse(rem.begin(),rem.end());
    while(oc!=occ){
        oc[t[ans]-'a']++;
        ++ans;
    }
    cout<<t.substr(0,ans)<<' '<<rem<<endl;
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
