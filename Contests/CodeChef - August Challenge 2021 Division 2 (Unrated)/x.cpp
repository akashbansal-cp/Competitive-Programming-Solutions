#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    vector<int> occ(26,0);
    for(int i=0;i<n;++i){
        if(s[i]>='A' && s[i]<='Z')s[i]=s[i]+'a'-'A';
        occ[s[i]-'a']++;
    }
    vector<int> dig(10,0);
    vector<string> d={"zzero","geight","ufour","ffive","xsix","sseven","hthree","ttwo","oone","inine"};
    vector<int> g={0,8,4,5,6,7,3,2,1,9};
    for(int i=0;i<10;++i){
        int p=occ[d[i][0]-'a'];
        for(int j=1;j<d[i].length();++j)occ[d[i][j]-'a']-=p;
        dig[g[i]]+=p;
    }
     
    return 0;
}