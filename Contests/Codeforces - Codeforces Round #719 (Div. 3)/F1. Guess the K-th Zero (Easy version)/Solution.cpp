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
    int n,t;
    cin>>n>>t;
    int x;
    for(int q=0;q<t;++q){
        int k;
        cin>>k;
        int i=1,j=n,m;
        while(j-i > 1){
            x=(i+j)/2;
            cout<<"? 1"<<' '<<x<<endl;
            cin>>m;
            m=x-m;
            if(m >= k)j=x;
            else i=x;
        }
        cout<<"? 1 "<<i<<endl;
        cin>>m;
        m=i-m;
        if(m==k)cout<<"! "<<i<<endl;
        else cout<<"! "<<j<<endl;
    }
}
