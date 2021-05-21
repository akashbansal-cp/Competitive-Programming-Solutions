#include <bits/stdc++.h>
using namespace std;
void solve()
{
}
int main()
{
    string s;
    cin>>s;
    string chk="hello";
    string v="",temp;
    for(int i=0;i<s.length();++i){
        if(v.length()>4)
            break;
        temp=v+s[i];
        if(temp==chk.substr(0,temp.length())){
            v+=s[i];
        }
    }
    if(v=="hello")
        cout<<"YES";
    else
        cout<<"NO";
    // int t;
    // cin >> t;
    // while (t--)
    //     solve();
    return 0;
}
