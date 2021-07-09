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
    int n,k;string s;
    cin>>n>>k>>s;
    int len = 1;
    for(int i=1;i<n;++i){
        if(s[0] > s[i])len = i+1;
        else if(s[0] < s[i])break;
        else{
            int j=0;
            for(j=0;j<len && (i+j)<n;++j){
                if(s[j]==s[i+j])continue;
                else break;
            }
            if(j==len){
                len = 2*len;
                i=len-1;
            }
            else if(i+j == n){
                break;   
            }
            else{
                if(s[i+j] < s[j]){
                    len = i+j+1;
                    i=i+j;
                }
                else break;
            }
        }
    }
    for(int i=0;i<k;++i)cout<<s[i%len];
    cout<<endl;
}
int main()
{
    fio
    int t=1;
    while (t--)
        solve();
    return 0;
}
