#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    vector<int> freq(26,0);
    for(int i=0;i<s.length();++i){
        freq[s[i]-'a']++;
    }
    for(int i=25;i>=0;--i){
        if(freq[i]!=0){
            for(int x=0;x<freq[i];++x)cout<<(char)('a'+i);
            break;
        }
    }
    cout<<endl;
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
