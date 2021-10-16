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
vector<int> ans;
void printer(int x,int y){
    int z=x;
    while(x<y){
        ans.push_back(x);
        x+=2;
    }
    x-=4;
    while(x>=z){
        ans.push_back(x);
        x-=2;
    }
}
void solve(int tc)
{
    ans={};
    int n;cin>>n;
    vector<int> data(n);
    int x=0;
    for(int i=0;i<n;++i){
        cin>>data[i];
        if(data[i])++x;
    }
    if(x&1){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> z;
    for(int i=0;i<n;++i){
        if(data[i])z.push_back(i);
    }
    if(z.size()==0){
        cout<<"YES\n0\n";
        return;
    }
    int p=-1;
    for(int i=0;i<z.size();i+=2){
        if((z[i+1]-z[i]-1)%2==1){
            printer(z[i],z[i+1]);
            p=i;
            break;
        }
        else{
            if(z[i]>0 && data[z[i]-1]==0){
                p=i;
                printer(z[i]-1,z[i+1]);
                break;
            }
            else if(z[i+1]<n-1 && data[z[i+1]+1]==0){
                p=i;
                printer(z[i],z[i+1]+1);
                break;
            }
        }
    }
    if(p==-1){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=p+2;i<z.size();i+=2){
        if((z[i+1]-z[i]-1)%2==1)printer(z[i],z[i+1]);
        else printer(z[i]-1,z[i+1]);
    }   
    for(int i=p-2;i>=0;i-=2){
        if((z[i+1]-z[i]-1)%2==1)printer(z[i],z[i+1]);
        else printer(z[i],z[i+1]+1);
    }
    cout<<"YES\n"<<ans.size()<<endl;
    for(int e:ans)cout<<e+1<<' ';
    cout<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)
    // while (t--)
        solve(i);
    return 0;
}
