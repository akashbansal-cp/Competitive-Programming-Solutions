#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;cin>>a>>b;
    string s;
    cin>>s;
    int n=s.length();
    if(n%2==1){
        if(s[n/2]=='?'){
            if(a%2==1)s[n/2]='0';
            else if(b%2==1)s[n/2]='1';
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    for(int i=0;i<n;++i){
        if(s[i]=='?' && s[n-1-i]!='?'){
            s[i]=s[n-1-i];
        }
    }
    for(int i=0;i<n;++i){
        if(s[i]!=s[n-1-i]){
            cout<<"-1"<<endl;return;
        }
        if(s[i]=='0')--a;
        if(s[i]=='1')--b;
    }
    if(a%2==1 || b%2==1){
        cout<<-1<<endl;return;
    }
    a/=2;b/=2;
    for(int i=0;i<n;++i){
        if(s[i]=='?'){
            if(a!=0){
                --a;
                s[i]='0',s[n-1-i]='0';
            }
            else {
                --b;
                s[i]='1',s[n-1-i]='1';
            }
        }
    }
    if(a==0 && b==0)cout<<s<<endl;
    else cout<<-1<<endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
