#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    map<string,int> data;
    s+=' ';
    string t="";
    for(int i=0;i<s.length();++i){
        if(s[i]==' '){
            data[t]++;
            t="";
        }
        else{
            t+=s[i];
        }
    }
    for(auto e:data){
        if(e.second > 1){
            cout<<e.first<<": "<<e.second<<endl;
        }
    }
}