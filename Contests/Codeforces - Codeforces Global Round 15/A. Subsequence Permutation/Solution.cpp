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
    string s;
    int n;cin>>n;
    cin>>s;
    vector<int> oc(26,0);
    for(char c:s){
        oc[c-'a']++;
    }
    int x=0,t=0;
    for(int i=0;i<26;++i){
        int p=oc[i];
        char q='a'+i;
        for(int y=0;y<p;++y,++x){
            if(s[x]==q)++t;
        }
    }
    cout<<s.length()-t<<endl;
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
