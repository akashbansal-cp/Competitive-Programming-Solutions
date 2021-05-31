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
    int n,k;cin>>n>>k;
    string s;
    cin>>s;
    int same=0,diff=0;
    for(int i=0;i<s.length()-1;++i){
        if(s[i]==s[i+1])++same;
        else ++diff;
    }
    int q,ans=same+(2*diff);
    for(int i=0;i<k;++i){
        cin>>q;
        --q;
        if(q!=0){
            if(s[q]==s[q-1]){
                --same;
                ++diff;
            }
            else --diff,++same;
        }
        if(q!=n-1){
            if(s[q]==s[q+1]){
                --same;
                ++diff;
            }
            else{
                --diff,++same;
            }
        }
        s[q]=='0' ? s[q]='1':s[q]='0';
        cout<<(same*2)+diff<<endl;
    }
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
