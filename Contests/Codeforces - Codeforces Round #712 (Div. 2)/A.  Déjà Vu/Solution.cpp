#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i){
        if(s[i]!='a'){
            cout<<"YES"<<endl;
            s.insert(s.length()-i,1,'a');
            cout<<s<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
