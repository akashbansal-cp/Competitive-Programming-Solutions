#include <bits/stdc++.h>
using namespace std;
bool validate(string hr,string mn,string h,string m){
    for(char c:hr){
        if(c!='0' && c!='1' && c!='2' && c!='5' && c!='8')
            return false;
    }
    for(char c:mn){
        if(c!='0' && c!='1' && c!='2' && c!='5' && c!='8')
            return false;
    }
    if(stoi(hr) < stoi(h) && stoi(mn) < stoi(m))
        return true;
    return false;
}
pair<string,string> createTime(string hr,string mn){
    pair<string,string> ans= {"00","00"};
    if(hr[0]=='0')ans.second[1]='0';
    else if(hr[0]=='1')ans.second[1]='1';
    else if(hr[0]=='2')ans.second[1]='5';
    else if(hr[0]=='5')ans.second[1]='2';
    else if(hr[0]=='8')ans.second[1]='8';

    if(hr[1]=='0')ans.second[0]='0';
    else if(hr[1]=='1')ans.second[0]='1';
    else if(hr[1]=='2')ans.second[0]='5';
    else if(hr[1]=='5')ans.second[0]='2';
    else if(hr[1]=='8')ans.second[0]='8';

    if(mn[0]=='0')ans.first[1]='0';
    else if(mn[0]=='1')ans.first[1]='1';
    else if(mn[0]=='2')ans.first[1]='5';
    else if(mn[0]=='5')ans.first[1]='2';
    else if(mn[0]=='8')ans.first[1]='8';

    if(mn[1]=='0')ans.first[0]='0';
    else if(mn[1]=='1')ans.first[0]='1';
    else if(mn[1]=='2')ans.first[0]='5';
    else if(mn[1]=='5')ans.first[0]='2';
    else if(mn[1]=='8')ans.first[0]='8';
    
    return ans;
}
void solve()
{
    string h,m;
    cin>>h>>m;
    if(h.length()==1)
        h="0"+h;
    if(m.length()==1)
        m="0"+m;
    string s;
    cin>>s;
    int i=0;
    string hr="",mn="";
    while(s[i]!=':'){
        hr+=s[i];
        ++i;
    }
    ++i;
    while(i<s.length()){
        mn+=s[i];
        ++i;
    }
revalidate:
    bool x=validate(hr,mn,h,m);
    if(x==true){
        // cout<<hr<<mn<<endl;
        pair<string,string> str=createTime(hr,mn);
        if(validate(str.first,str.second,h,m)){

            cout<<hr<<":"<<mn<<endl;
            return;
        }
    }
    //INCREMENT
    if(mn=="99"){
        mn="00";
        if(hr=="99"){
            hr="00";
        }
        else{
            if(hr[1]=='9'){
                hr[1]=0;
                hr[0]++;
            }
            else
                ++hr[1];
        }
    }
    else{
        if(mn[1]=='9'){
            mn[1]=0;
            mn[0]++;
        }
        else{
            ++mn[1];
        }
    }
    goto  revalidate;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
