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
void solve(int t)
{
    string  s;cin>>s;
    vector<int> data(26,0);
    for(char c:s)data[c-'A']++;
    int a=0,b=0;
    for(int i=0;i<26;++i){
        if(i==0 || i==4 || i==8 || i==14 || i==20)a+=data[i];
        else b+=data[i];
    }
    int ans = INT_MAX;
    for(int i=0;i<26;++i){
        if(i==0 || i==4 || i==8 || i==14 || i==20){
            ans = min(ans,2*(a-data[i])+b);
        }        
        else ans = min(ans,2*(b-data[i])+a);
    }
    cout<<"Case #"<<t<<": "<<ans<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)solve(i);
    return 0;
}
