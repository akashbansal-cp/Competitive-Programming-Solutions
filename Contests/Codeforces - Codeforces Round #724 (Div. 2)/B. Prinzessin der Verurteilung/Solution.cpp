#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
vector<string> str;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,bool> d;
    for(int i=0;i<n;++i){
        for(int j=0;j<3;++j){
            if(i+j < n){
                d[s.substr(i,j+1)]=true;
            }
        }
    }
    for(int i=0;i<str.size();++i){
        if(d[str[i]]==false){
            cout<<str[i]<<endl;
            return;
        }
    }
}
int main()
{
    fio
    int t;
    cin >> t;
    string temp;
    for(int i=0;i<26;++i){
        temp='a'+i;
        str.push_back(temp);
    }
    for(int i=0;i<26;++i){
        for(int j=0;j<26;++j){
            temp='a'+i;
            temp+=('a'+j);
            str.push_back(temp);
        }
    }
    for(int i=0;i<26;++i){
        for(int j=0;j<26;++j){
            for(int k=0;k<26;++k){
                temp='a'+i;
                temp+=('a'+j);
                temp+=('a'+k);
                str.push_back(temp);
                if(str.size()==2000)goto exit;
            }
        }
    }
    exit:
    while (t--)
        solve();
    return 0;
}
