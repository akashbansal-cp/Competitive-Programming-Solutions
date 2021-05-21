#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s=to_string(n);
    for(int i=0;i<s.length();++i){
        if(i == s.length()-1){
            stringstream g(s.substr(0,s.length()-1));
            int temp;
            g>>temp;
            cout<<temp<<endl;
            return ;
        }
        if(s[i] <= s[i+1])
            continue;
        else if(s[i] > s[i+1]){
            stringstream g(s.substr(0,i)+s.substr(i+1,s.length()-i-1));
            int temp;
            g>>temp;
            cout<<temp<<endl;
            return ;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}