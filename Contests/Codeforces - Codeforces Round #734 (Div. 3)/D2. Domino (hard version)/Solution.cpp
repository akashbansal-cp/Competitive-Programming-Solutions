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
void rm(set<char>& cx,int x,int y,vector<vector<char>>& ans){
    for(int i=-1;i<=1;++i){
        for(int j=-1;j<=1;++j){
            if(i==0 && j==0)continue;
            if((x+i) >= 0 && (x+i)<ans.size() && (y+j)>=0 && (y+j)<ans[0].size() && ans[i+x][j+y]!='$')cx.erase(ans[i+x][j+y]);
        }
    }
}
void solve()
{
    set<char> _x;
    for(int i=0;i<26;++i)_x.insert('a'+i);
    int n,m,k;
    cin>>n>>m>>k;
    if(n%2==1){
        k-=(m/2);
        if(k>=0 && k%2==0){
            cout<<"YES\n";
            vector<vector<char>> ans(n,vector<char>(m,'$'));
            int x=0;
            for(int i=0;i<m;i+=2){
                x%=26;
                ans[0][i]='a'+x;
                ans[0][i+1]='a'+x;
                ++x;
            }
            bool p = true;
            if(k==0)p=false;
            for(int i=1;i<n;i+=2){
                for(int j=0;j<m;j+=2){
                    set<char> cx=_x;
                    rm(cx,i,j,ans);
                    if(p){
                        k-=2;
                        char _1=*(cx.begin());
                        cx.erase(_1);
                        char _2=*(cx.begin());
                        ans[i][j]=_1;
                        ans[i][j+1]=_1;
                        ans[i+1][j]=_2;
                        ans[i+1][j+1]=_2;
                        if(k==0)p=false;
                    }
                    else{
                        char _1=*(cx.begin());
                        cx.erase(_1);
                        char _2=*(cx.begin());
                        ans[i][j]=_1;
                        ans[i][j+1]=_2;
                        ans[i+1][j]=_1;
                        ans[i+1][j+1]=_2;
                    }
                }
            }
            for(auto e:ans){
                for(auto f:e)cout<<(char)f;
                cout<<endl;
            }
        }
        else cout<<"NO\n";
    }
    else if(n%2==0 && m%2==0){
        if(k%2==0){
            cout<<"YES\n";
            vector<vector<char>> ans(n,vector<char>(m,'$'));
            bool p = true;
            if(k==0)p=false;
            for(int i=0;i<n;i+=2){
                for(int j=0;j<m;j+=2){
                    set<char> cx=_x;
                    rm(cx,i,j,ans);
                    if(p){
                        k-=2;
                        char _1=*(cx.begin());
                        cx.erase(_1);
                        char _2=*(cx.begin());
                        ans[i][j]=_1;
                        ans[i][j+1]=_1;
                        ans[i+1][j]=_2;
                        ans[i+1][j+1]=_2;
                        if(k==0)p=false;
                    }
                    else{
                        char _1=*(cx.begin());
                        cx.erase(_1);
                        char _2=*(cx.begin());
                        ans[i][j]=_1;
                        ans[i][j+1]=_2;
                        ans[i+1][j]=_1;
                        ans[i+1][j+1]=_2;
                    }
                }
            }
            for(auto e:ans){
                for(auto f:e)cout<<(char)f;
                cout<<endl;
            }
            // cout<<ans[n-1][m-1]<<endl;
        }
        else cout<<"NO\n";
    }
    else{
        int x=(m-1)*n;
        x/=2;
        if(k%2==0  && k<=x){
            cout<<"YES\n";
            vector<vector<char>> ans(n,vector<char>(m,'$'));
            bool p = true;
            if(k==0)p=false;
            for(int i=0;i<n;i+=2){
                for(int j=0;j<m-1;j+=2){
                    set<char> cx=_x;
                    rm(cx,i,j,ans);
                    if(p){
                        k-=2;
                        char _1=*(cx.begin());
                        cx.erase(_1);
                        char _2=*(cx.begin());
                        ans[i][j]=_1;
                        ans[i][j+1]=_1;
                        ans[i+1][j]=_2;
                        ans[i+1][j+1]=_2;
                        if(k==0)p=false;
                    }
                    else{
                        char _1=*(cx.begin());
                        cx.erase(_1);
                        char _2=*(cx.begin());
                        ans[i][j]=_1;
                        ans[i][j+1]=_2;
                        ans[i+1][j]=_1;
                        ans[i+1][j+1]=_2;
                    }
                }
            }
            for(int i=0;i<n;i+=2){
                    set<char> cx=_x;
                    rm(cx,i,m-1,ans);
                    char _1=*(cx.begin());
                    ans[i][m-1]=_1;
                    ans[i+1][m-1]=_1;

            }
            for(auto e:ans){
                for(auto f:e)cout<<(char)f;
                cout<<endl;
            }
            // cout<<ans[n-1][m-1]<<endl;
        }
        else cout<<"NO\n";
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
