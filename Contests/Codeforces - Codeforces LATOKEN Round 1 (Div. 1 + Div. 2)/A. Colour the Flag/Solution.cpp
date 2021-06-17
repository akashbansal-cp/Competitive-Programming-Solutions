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
    int n,m;
    cin>>n>>m;
    vector<string> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    vector<string> ans1(n);
    vector<string> ans2(n);
    bool con=false;
    for(int i=0;i<n;++i){
        string s = "",_s="";
        bool con2=con;
        for(int j=0;j<m;++j){
            if(con2)s+='W',_s+='R';
            else s+='R',_s+='W';
            con2=!con2;
        }
        ans1[i]=s;
        ans2[i]=_s;
        con=!con;
    }
    // for(auto e:ans1)cout<<e<<endl;
    // for(auto f:ans2)cout<<f<<endl;
    // try for ans1
    bool a1=true;
    for(int i=0;i<n;++i){
        int j=0;
        for(j=0;j<m;++j){
            if(data[i][j]!='.' && data[i][j]!=ans1[i][j]){
                a1=false;
                break;
            }
        }
        if(j!=m)break;
    }
    if(a1){
        cout<<"YES"<<endl;
        for(auto e:ans1)cout<<e<<endl;
        return;
    }
    // try for ans2
    bool a2=true;
    for(int i=0;i<n;++i){
        int j=0;
        for(j=0;j<m;++j){
            if(data[i][j]!='.' && data[i][j]!=ans2[i][j]){
                a2=false;
                break;
            }
        }
        if(j!=m)break;
    }
    if(a2){
        cout<<"YES"<<endl;
        for(auto e:ans2)cout<<e<<endl;
        return;
    }
    cout<<"NO"<<endl;
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
