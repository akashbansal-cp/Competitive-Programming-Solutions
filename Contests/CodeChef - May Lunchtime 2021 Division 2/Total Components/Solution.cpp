#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;

int main()
{
    fio
    int t;
    cin >> t;
    vector<bool> prime(10000001,true);
    prime[0]=false,prime[1]=false;
    vector<int> one_prime(10000001);
    vector<int> p_num(10000001,0);
    vector<int> ans(10000001,0);
    vector<int> par(10000001);
    int z=0,x,y;
    for(int i=2;i<10000001;++i){
        if(prime[i]==true){
            par[i]=i;
            for(int j=i+i;j<10000001;j+=i){
                prime[j]=false;
                p_num[j]++;
                if(p_num[j]==2){
                    one_prime[j]=i;
                }
            }
        }
    }
    for(int i=2;i<10000001;++i){
        if(p_num[i]==2){
            x=one_prime[i];
            y=i/x;
            if(prime[x]==true && prime[y]==true && par[x]!=par[y]){
                --z;
                par[x]=y;
            }
        }
        else if(prime[i]==true)++z;
        ans[i]=z;
    }
    int q;
    while (t--){
        cin>>q;
        cout<<ans[q]<<endl;
    }
    return 0;
}
