#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.length();++i){
        if(s[i]=='A')++a;
        if(s[i]=='B')++b;
        if(s[i]=='C')++c;
    }
    vector<char> t;
    if(a+b==c){
        if(s[0]=='C')
            t={')',')','('};
        else
            t={'(','(',')'};
    }
    else if(a+c==b){
        if(s[0]=='B')
            t={')','(',')'};
        else
            t={'(',')','('};
    }
    else if(b+c==a){
        if(s[0]=='A')
            t={'(',')',')'};
        else
            t={')','(','('};
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    // for(char c:t)
    //     cout<<c<<endl;
    // cout<<t[0]<<t[1]<<t[2]<<endl;
    for(int i=0;i<s.length();++i){
        if(s[i]=='A')
            s[i]=t[0];
        else if(s[i]=='B')
            s[i]=t[1];
        else
            s[i]=t[2];
    }
    // check bracket seq;
    int on=0;
    for(int i=0;i<s.length();++i){
        if(s[i]=='(')
            ++on;
        else
            --on;
        if(on<0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
