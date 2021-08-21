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
    int k;
    string s;
    cin>>s>>k;
    int n=s.length();
    vector<int> unsol(10,0);
    for(char c:s)unsol[c-'0']++;
    int z=0;
    for(int e:unsol)if(e)++z;
    if(z<=k){
        cout<<s<<endl;
        return;
    }
    for(int i=n-1;i>=0;--i){
        --unsol[s[i]-'0'];
        if(unsol[s[i]-'0']==0)--z;
        if(k==z){
            for(int j=s[i]-'0'+1;j<10;++j){
                if(unsol[j]!=0){
                    s[i]='0'+j;
                    char m='$';
                    for(int l=0;l<10;++l){
                        if(unsol[l]!=0){
                            m='0'+l;
                            break;
                        }
                    }
                    for(int l=i+1;l<n;++l)s[l]=m;
                    cout<<s<<endl;
                    return;
                }
            }
        }
        else if(k>z){
            s[i]=s[i]+1;
            unsol[s[i]-'0']++;
            if(unsol[s[i]-'0']==1)++z;
            int m=0;
            if(k==z){
                for(int j=0;j<10;++j){
                    if(unsol[j]){
                        m=j;
                        break;
                    }
                }
            }
            for(int j=i+1;j<n;++j)s[j]='0'+m;
            cout<<s<<endl;
            return;
        }
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
