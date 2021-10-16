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
    ll n;cin>>n;
    vector<int> ch;
    while(n!=0){
        if(n%2==0){
            int p=0;
            while(n%2==0){
                n/=2;
                ++p;
            }
            ch.push_back(p);
        }
        else{
            --n;
            ch.push_back(-1);
        }
    }
    vector<char> w(ch.size());
    w[ch.size()-1]='w';
    for(int i=ch.size()-2;i>=0;--i){
        if(ch[i]==-1){
            w[i]=w[i+1]=='w'?'l':'w';
        }
        else{
            if(ch[i]==1 && w[i+1]=='w')w[i]='l';
            else w[i]='w';
        }
    }
    if(w[0]=='w')cout<<"Alice\n";
    else cout<<"Bob\n";
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
