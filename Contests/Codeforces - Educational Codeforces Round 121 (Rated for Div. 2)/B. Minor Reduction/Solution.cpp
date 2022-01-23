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
    string s;cin>>s;
    bool m=true;
    for(int i=0;i<s.length()-1;++i){
        int _1=s[i]-'0',_2=s[i+1]-'0';
        _1+=_2;
        if(_1 >= 10){
            m=false;
            break;
        }
    }
    string _m="";
    if(m){
        int _i=s[0]-'0'+s[1]-'0';
        _m=(char)(_i+'0')+s.substr(2,s.length()-2);
        cout<<_m<<endl;
    }
    else{
        for(int i=s.length()-1;i>=0;--i){
            int _1=s[i]-'0',_2=s[i+1]-'0';
            _1+=_2;
            if(_1 >= 10){
                _2=_1%10;
                _1/=10;
                _m=s.substr(0,i)+(char)('0'+_1)+(char)('0'+_2)+s.substr(i+2,s.length()-i-2);
                cout<<_m<<endl;
                return;
            }
        }
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
