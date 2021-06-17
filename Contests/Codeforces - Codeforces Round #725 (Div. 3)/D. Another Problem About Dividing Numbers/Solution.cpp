#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
int getPrimes(int n){
    int p=0;
    for(int i=0;i<primes.size();++i){
        while(n%primes[i]==0){
            ++p;
            n/=primes[i];
        }
    }   
    if(n > 2)return p+1;
    return p;
}
void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    if(k==1){
        if(a==b){cout<<"NO"<<endl;return;}
        if(a%b==0 || b%a==0){cout<<"YES"<<endl;return;}
        cout<<"NO"<<endl;return;
    }
    int p=__gcd(a,b);
    a=a/p,b=b/p;
    a=getPrimes(a);
    b=getPrimes(b);
    p=getPrimes(p);
    int mn = min(1,a)+min(1,b);
    int mx = a+b+(2*p);
    if(k<=mx && k>=mn){cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
    
}
int main()
{
    int m=32000;
    vector<bool> d(m,true);
    d[0]=false,d[1]=false;
    for(int i=2;i<m;++i){
        if(d[i]==true){
            primes.push_back(i);
            for(int j=i+i;j<m;j+=i){
                d[j]=false;
            }
        }
    }
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
