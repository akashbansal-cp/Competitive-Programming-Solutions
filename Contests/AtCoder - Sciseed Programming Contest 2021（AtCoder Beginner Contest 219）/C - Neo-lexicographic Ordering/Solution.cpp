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
vector<int> d(26);
bool cmpr(string& s1,string& s2){
    if(s1==s2)return true;
    int m=min(s1.length(),s2.length());
    for(int i=0;i<m;++i){
        if(d[s1[i]-'a'] < d[s2[i]-'a'])return true;
        else if(d[s1[i]-'a'] > d[s2[i]-'a'])return false;
    }
    if(s1.length() > s2.length())return false;
    return true;
}
int main()
{
    fio
    string s;cin>>s;
    for(int i=0;i<26;++i)d[s[i]-'a']=i;
    int n;cin>>n;
    vector<string> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    sort(data.begin(),data.end(),cmpr);
    for(string e:data)cout<<e<<endl;
    return 0;
}
