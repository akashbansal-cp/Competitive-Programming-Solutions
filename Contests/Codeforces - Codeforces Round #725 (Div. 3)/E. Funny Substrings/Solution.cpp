#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
int findhaha(string s){
    int z=0;
    for(int i=0;i<s.length();++i){
        if(i+3 < s.length())++z;
    }
    return z;
}
void solve()
{
    string last;
    int n;
    cin>>n;
    string a,b,c,d,e;
    map<string,string> occ;
    for(int i=0;i<n;++i){
        cin>>a>>b;
        if(b==":="){
            cin>>c;
            occ[a]=c;
            last = a;
        }
        else if(b=="="){
            cin>>c>>d>>e;
            string p=occ[c]+occ[e];
            occ[a]=p;
            last = a;
        }
    }
    for(auto e:occ)cout<<e.first<<' '<<e.second<<endl;
    cout<<findhaha(occ[last])<<endl;
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
