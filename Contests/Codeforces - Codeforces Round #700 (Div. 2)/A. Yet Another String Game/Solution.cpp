#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i){
        if(i%2==0){//alice
            if(s[i]=='a')
                s[i]='b';
            else    
                s[i]='a';
        }
        else{//bob
            if(s[i]=='z')
                s[i]='y';
            else    
                s[i]='z';
        }
    }
    cout<<s<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
