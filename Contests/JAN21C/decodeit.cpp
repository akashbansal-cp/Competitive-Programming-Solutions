#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s,ans="";
        cin>>n>>s;
        for(int i=0;i<n;i+=4){
            int x=0;
            if(s[i]=='1')
                x+=pow(2,3);
            if(s[i+1]=='1')
                x+=pow(2,2);
            if(s[i+2]=='1')
                x+=pow(2,1);
            if(s[i+3]=='1')
                x+=pow(2,0);
            ans+=('a'+x);
        }
        cout<<ans<<endl;
    }
}