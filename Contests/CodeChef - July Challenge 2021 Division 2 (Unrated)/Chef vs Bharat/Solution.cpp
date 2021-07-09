#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll power(ll x,ll y){
    ll result = 1;
    x=x%MOD;
    if(x==0)return 0;
    while(y > 0){
        if(y%2==1){
            result = result * x;
            result%=MOD;
            --y;
        }
        y/=2;
        x*=x;
        x%=MOD;
    }
    return result;
}
int main()
{
    fio
    int q;
    cin >> q;
    vector<ll> chefora(100000);
    // one digit
    int p=0;
    for(int i=1;i<10;++i)chefora[p]=i,++p;
    // three digit
    for(int i=1;i<10;++i){
        for(int j=0;j<10;++j){
            chefora[p]= (ll)(101*i)+10*j;
            ++p;
        }
    }
    // five digits
    for(int i=1;i<10;++i){
        for(int j=0;j<10;++j){
            for(int k=0;k<10;++k){
                chefora[p]=(ll)10001*i+1010*j+100*k;
                ++p;
            }
        }
    }
    // seven digits
    for(int i=1;i<10;++i){
        for(int j=0;j<10;++j){
            for(int k=0;k<10;++k){
                for(int l=0;l<10;++l){
                    chefora[p]=(ll)1000001*i+100010*j+10100*k+1000*l;
                    ++p;
                }
            }
        }
    }
    // nine digits
    for(int i=1;i<10;++i){
        for(int j=0;j<10;++j){
            for(int k=0;k<10;++k){
                for(int l=0;l<10;++l){
                    for(int m=0;m<10;++m){
                        chefora[p]=(ll)100000001*i+10000010*j+1000100*k+101000*l+10000*m;
                        ++p;
                    }
                }
            }
        }
    }
    chefora[p]=10000000001;
    int l,r;
    vector<ll> chef(100000);
    chef[0]=chefora[0];
    for(int i=1;i<100000;++i){
        chef[i]=chefora[i];
        chefora[i]+=chefora[i-1];
        // cout<<chefora[i]<<endl;
    }
    for(int i=0;i<q;++i){
        cin>>l>>r;
        --l,--r;
        ll p=chefora[r]-chefora[l];
        cout<<power(chef[l],p)<<'\n';
    }
    return 0;
}