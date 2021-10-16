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
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    vector<vector<char>> data(n,vector<char>(n,'='));
    for(int i=0;i<n;++i){
        data[i][i]='X';
    }
    vector<int> p;
    for(int i=0;i<n;++i){
        if(s[i]=='2')p.push_back(i);
    }
    // cout<<p.size()<<endl;;
    if(p.size() > 0 && p.size() < 3){
        cout<<"NO"<<endl;
        return;
    }
    else{
        int x=p.size();
        // for(int e:p)cout<<e<<' ';cout<<endl;
        for(int i=0;i<p.size();++i){
            // cout<<p[i]<<endl;
            data[p[i]][p[(i+1)%x]]='+';
            data[p[(i+1)%x]][p[i]]='-';
        }
        // data[p[p.size()-1]][0]='+';
        // data[0][p[p.size()-1]]='-';
    }

    // vector<int> curr(n,0);
    // for(int i=0;i<n;++i){
    //     if(s[i]=='2'){
    //         bool f=false;
    //         for(int j=0;j<n;++j){
    //             if(i!=j){
    //                 if(curr[j]<n-1 && s[j]=='2'){
    //                     if(data[j][curr[j]]=='='){
    //                         data[j][curr[j]]=='-';
    //                         data[i][j]=='+';
    //                         ++curr[j];
    //                         f=true;
    //                         break;
    //                     }
    //                     else if(data[j][curr[j]]=='X' && curr[j]!=n-2){
    //                         data[j][curr[j]+1]='-';
    //                         data[i][j]='+';
    //                         curr[j]+=2;
    //                         f=true;
    //                         break;
    //                     }
    //                 }
    //             }
    //         }
    //         if(f==false){
    //             cout<<"NO"<<endl;
    //             return;
    //         }
    //     }
    // }
    cout<<"YES"<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<data[i][j];
        }
        cout<<endl;
    }
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
