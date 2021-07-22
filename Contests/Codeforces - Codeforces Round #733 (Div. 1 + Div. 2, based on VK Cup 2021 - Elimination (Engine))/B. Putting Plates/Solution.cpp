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
    int h,w;
    cin>>h>>w;
    bool s= true;
    for(int i=0;i<w;++i){
        if(s)cout<<1;
        else cout<<0;
        s=!s;
    }
    cout<<endl;
    s=false;
    for(int i=1;i<h-1;++i){
        if(s)cout<<1;
        else cout<<0;
        for(int j=1;j<w-1;++j)cout<<0;
        if(s)cout<<1;
        else cout<<0;
        s=!s;
        cout<<endl;
    }
    if(s==false){
        bool _s=true;
        if(w==3)cout<<"000";
        else{
            cout<<"00";
            for(int j=2;j<w-2;++j){
                if(_s)cout<<1;
                else cout<<0;
                _s=!_s;
            }
            cout<<"00";
        }
    }
    else{
        for(int i=0;i<w;++i){
            if(s)cout<<1;
            else cout<<0;
            s=!s;
        }
    }
    cout<<endl<<endl;
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
