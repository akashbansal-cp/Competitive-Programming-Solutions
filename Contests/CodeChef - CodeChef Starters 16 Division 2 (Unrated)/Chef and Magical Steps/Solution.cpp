#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define INF INT_MAX
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
vector<int> data(1e7+10,INF);
int main()
{
    fio
    int x=1e7+11;
    vector<bool> prime(x,true);
    prime[0]=prime[1]=true;
    for(int i=2;i<x;++i){
        if(prime[i]==true){
            for(int j=i+i;j<x;j+=i)prime[j]=false;
        }
    }
    vector<int> d;
    for(int i=2;i<x;++i){
        if(prime[i])d.push_back(i);
    }
    vector<int> steps(x,INF);
    steps[0]=steps[1]=0;
    int m=2;
    for(int i=0;i<d.size();++i){
        while(m!=d[i]){
            steps[m]=steps[m-1]+1;
            ++m;
        }
        if(m==d[i]){
            steps[m]=min(steps[m-1],steps[m-2])+1;
            ++m;
        }
    }
    while(m<x){
        steps[m]=steps[m-1]+1;
        ++m;
    }
    int t;
    cin >> t;
    while (t--){
        int a,b;cin>>a>>b;
        if(steps[a+1]==steps[a])cout<<steps[b]-steps[a]+1<<endl;
        else 
            cout<<steps[b]-steps[a]<<endl;
    }
    return 0;
}
