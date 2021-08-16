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
    int n;
    cin>>n;
    vector<vector<int>> occ(n,vector<int>(6,0));
    string temp;
    int tl=0;
    for(int i=0;i<n;++i){
        cin>>temp;
        for(char c:temp)occ[i][c-'a']++;
        occ[i][5]=temp.length();
        tl+=temp.length();
    }
    // for(auto e:occ){
    //     for(int f:e)cout<<f<<' ';
    //     cout<<endl;
    // }
    int _tl=tl;
    int l=0;
    for(int i=0;i<5;++i){
        vector<pair<int,int>> diff(n);
        int cl=0;
        tl=_tl;
        for(int j=0;j<n;++j){
            diff[j].first=occ[j][i]+occ[j][i]-occ[j][5]; 
            diff[j].second=occ[j][5]; 
            cl+=occ[j][i];
        }
        // for(auto e:diff)cout<<e.first<<' ';cout<<endl;
        // cout<<cl<<' '<<tl<<endl;
        int ca=0;
        sort(diff.begin(),diff.end());
        int el = tl-cl;
        if(el < cl){
            // cout<<"~~~~~~~~"<<i<<' '<<cl<<' '<<tl<<' '<<el<<endl;
            l=n;
            break;
        }
        for(int j=0;j<n;++j){
            cl-=(diff[j].first+diff[j].second)/2,tl-=diff[j].second;
            el = tl - cl;
            // cout<<cl<<' '<<tl<<endl;
            if(el < cl){
                ca = n-j-1;
                break;
            }
        }
        l=max(l,ca);
        // cout<<"??"<<ca<<' '<<l<<endl;
    }
    cout<<l<<endl;
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
