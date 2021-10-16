#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>a(26,0),b(26,0);
    int ans=0;
    for(char c:s)b[c-'a']++;
    for(int i=0;i<n;++i){
        a[s[i]-'a']++,b[s[i]-'a']--;
        int ca=0;
        for(int j=0;j<26;++j){
            if(a[j]!=0 && b[j]!=0)++ca;
        }
        ans=max(ans,ca);
    }
    cout<<ans<<endl;
}