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
    int n,ans=0;
    cin>>n;
    vector<bool> prime(3001,true);
    prime[1]=false;
    for(int i=2;i<3001;++i){
        if(prime[i]==true){
            for(int j=i*2;j<3001;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int> p;
    for(int i=1;i<3001;++i){
        if(prime[i]==true)p.push_back(i);
    }
    for(int i=1;i<=n;++i){
        int temp=i;
        int x=0;
        for(int j=0;j<p.size();++j){
            if(temp>=p[j] && temp%p[j]==0){
                ++x;
                while(temp%p[j]==0)temp/=p[j];
            }
        }
        if(temp==1  && x==2)++ans;
    }
    cout<<ans<<endl;
    return 0;
}
