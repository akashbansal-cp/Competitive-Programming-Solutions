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
    int g=n%k;
    bool signal = false;
    int x,y,z;
    if(g%2==0){
        z=n/k;
        g/=2;
    }
    else{
        if(k%2==0){cout<<-1<<endl;return;}
        else{
            z=n/k;
            g/=2;
            signal = true;
        }
    }
    vector<int> cnt(31,0);
    int i=1;
    for(int j=0;j<z;++j){
        cout<<"? ";
        for(int l=0;l<k;++l,++i){
            cout<<i<<' ';
        }
        cout<<endl;
        cin>>y;
        for(int x=30;x>=0;--x){
            if(y >= pow(2,x)){
                y-=pow(2,x);
                cnt[x]++;
            }
        }
    }
    if(g!=0){
        int _k=k-g;
        for(int j=0;j<2;++j){
            cout<<"? ";
            for(int l=1;l<=_k;++l)cout<<l<<' ';
            for(int l=0;l<g;++l,++i)cout<<i<<' ';
            cout<<endl;
            cin>>y;
            for(int x=30;x>=0;--x){
                if(y >= pow(2,x)){
                    y-=pow(2,x);
                    cnt[x]++;
                }
            }
        }
    }
    if(signal){
        int scope = n-k;
        int _z=min((k-1)/2,scope);
        cout<<_z<<endl;
        for(;_z > 0;--_z){
            int _m=(k-1)%_z;
            if(_m==0){
                int _n=(k-1)/_z;
                if(_n%2==0){
                    int start=1;
                    for(int _p=0;_p<=_n;++_p){
                        cout<<"? ";
                        for(int md=0;md<k-1;++md){
                            int _w=(md+start)%(n-1);
                            if(_w==0)cout<<n-1<<' ';
                            else cout<<_w<<' ';
                        }
                        cout<<n<<' '<<endl;

                        start+=_z;
                    }
                    goto brk;
                }
            }
        }
    }
    brk:
    int ans=0;
    for(int i=0;i<31;++i){
        if(cnt[i]%2==1){
            ans+=pow(2,i);
        }
    }
    cout<<"! "<<ans<<endl;
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
