#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char t[20]={'I','s',' ','i','t',' ','r','a','t','e','d','?','\n'};
    char z[]={};
    while(true){
        char s[100];
        cin.getline(s,100);
        cout<<s<<endl;
        if(s==t)cout<<"NO"<<endl;
        else  break;
        // else cout<<"YES"<<endl;
    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
