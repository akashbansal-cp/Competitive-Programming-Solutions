#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string a="",b="";
    int p=0;
    for(int i=0;i<n;++i){
        if(s[i]=='1')++p;
    }
    if(p%2!=0 || s[0]!='1' || s[n-1]!='1'){
        cout<<"NO"<<endl;return;
    }
    p/=2;
    int x=0,y=0;
    for(int i=0;i<n;++i){
        if(s[i]=='1'){
            ++x;
            if(x<=p){
                a+='(';
                b+='(';
            }
            else{
                a+=')';
                b+=')';
            }
        }
        else{
            ++y;
            if(y%2==0){
                a+='(';
                b+=')';
            }
            else{
                a+=')';
                b+='(';
            }
        }
    }
    cout<<"YES"<<'\n'<<a<<'\n'<<b<<'\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
