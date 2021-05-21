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
    int t1,t2;
    int n;cin>>n;
    bool found=false;
    int p=-1;
    for(int i=0;i<n-1;i+=2){
        cout<<"? 2 "<<i+1<<' '<<i+2<<' '<<1<<endl;
        cin>>t1;
        cout<<"? 2 "<<i+2<<' '<<i+1<<' '<<1<<endl;
        cin>>t2;
        if(t1==1){
            
        }
        if(t==1){
            found=true;
            p=i;
            break;
        }
    }
    if(found==false){
        p=n-1;
    }
    else{
        if(p-1 >= 0){
            cout<<"? 2 "<<p<<' '<<p+1<<' '<<1<<endl;
            cin>>t;
            if(t==1){
                p=p;
            }
            else{
                p=p+1;
            }
        }
        else{
            cout<<"? 2 "<<p+2<<' '<<p+3<<' '<<1<<endl;
            cin>>t;
            if(t==1)
                p=p+1;
            else 
                p=p;
        }
    }
    vector<int> ans(n,-1);
    ans[p]=1;
    for(int i=0;i<n;++i){
        if(i!=p){
            cout<<"? 1 "<<i+1<<' '<<p+1<<' '<<n-1<<endl;
            cin>>t;
            ans[i]=t;
        }
    }
    cout<<"! ";
    for(int e:ans){
        cout<<e<<' ';
    }
    cout<<endl;
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
