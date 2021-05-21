#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    vector<int> occ(26,0);
    for(int i=0;i<s.length();++i){
        occ[s[i]-'a']++;
    }
    string ans="";
    vector<int> p=occ;
    vector<bool> rel(s.length(),true);
    for(int i=0;i<s.length();++i){
        if(p[s[i]-'a']==1)rel[i]=false;
        p[s[i]-'a']--;
    }
    // for(bool e:rel)cout<<(int)e<<' ';cout<<endl;
    int n=0;
    for(int i=0;i<26;++i)if(occ[i]!=0)++n;
    int m=0;



    vector<bool> released(26,true);
    for(int i=0;i<26;++i){
        if(occ[i]!=0)released[i]=false;
    }


    // cout<<(int)('a'-1)<<endl;
    for(int i=0;i<n;++i){
        while(released[s[m]-'a']==true){
            ++m;
        }
        char x=s[m];
        int y=m;
        do{
            if(released[s[m]-'a']==false){
                if(s[m]>x){
                    x=s[m],y=m;
                }
            }
            ++m;
            // cout<<m<<endl;
        }
        while(rel[m-1]!=false && m<s.length());
        // cout<<x<<' '<<y<<endl;
        ans+=x;
        // cout<<x<<' '<<released[x-'a']<<' ';
        released[x-'a']=true;
        // cout<<released[x-'a']<<endl;
        m=y+1;
    }
    
    
    
    
    
    
    
    
    // cout<<endl;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
