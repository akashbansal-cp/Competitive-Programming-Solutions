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
    int n;
    cin>>n;
    string s;
    vector<int> data(26,0);
    for(int i=0;i<n;++i){
        cin>>s;
        for(char c:s){
            data[c-'a']++;
        }
    }
    for(int e:data){
        if(e%n!=0){
            cout<<"NO"<<endl;return;
        }
    }
    cout<<"YES"<<endl;
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
