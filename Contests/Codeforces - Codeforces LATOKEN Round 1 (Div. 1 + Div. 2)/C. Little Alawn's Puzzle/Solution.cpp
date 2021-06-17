#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
ll power(ll cycle){
    if(cycle==0)return 1;
    if(cycle%2==0){
        cycle = power(cycle/2);
        cycle*=cycle;
        cycle%=MOD;
    }
    else{
        cycle = power(cycle/2);
        cycle*=cycle;
        cycle%=MOD;
        cycle*=2;
        cycle%=MOD;
    }
    return cycle;
}
void solve()
{
    int n;cin>>n;
    vector<int> per1(n+1);
    vector<int> per2(n+1);
    int temp;
    for(int i=1;i<=n;++i){
        cin>>temp;
        per1[temp]=i;
    }
    for(int i=1;i<=n;++i)cin>>per2[i];
    ll cycle=0;
    vector<bool> visited(n+1,false);
    for(int i=1;i<=n;++i){
        if(visited[i]==false){
            visited[i]=true;
            int x=per2[per1[i]];
            while(visited[x]==false){
                visited[x]=true;
                x=per2[per1[x]];
            }
            ++cycle;
        }
    }
    cout<<power(cycle)<<endl;
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
