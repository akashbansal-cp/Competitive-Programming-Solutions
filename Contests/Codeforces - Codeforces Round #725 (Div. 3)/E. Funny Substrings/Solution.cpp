#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
struct variable{
    ll length;
    ll count;
    string prefix;
    string suffix;
};
variable* getVari(string s){
    variable* var = new variable;
    var->length=s.length();
    var->count=0;
    if(s.length() < 4){
        var->prefix=s;
        var->suffix=s;
        return var;
    }
    if(s.length()==4 && s=="haha")++var->count;
    if(s.length()==5 && (s.substr(0,4)=="haha" || s.substr(1,4)=="haha"))++var->count;
    var->prefix=s.substr(0,3);
    var->suffix=s.substr(s.length()-3,3);
    return var;
}
variable* add(variable* s1,variable* s2){
    variable* var = new variable;
    var->length=s1->length+s2->length;
    var->count=s1->count+s2->count;
    string con = s1->suffix+s2->prefix;
    for(int i=0;i<con.length();++i){
        if(i+3 < con.length() && con.substr(i,4)=="haha")++var->count;
    }
    if(s1->prefix.length() == 3)var->prefix=s1->prefix;
    else{
        if(s2->prefix.length()+s1->prefix.length() <= 3)var->prefix=s1->prefix+s2->prefix;
        else {
            var->prefix=s1->prefix+s2->prefix.substr(0,3-(s1->prefix.length()));
        }
    }
    if(s2->suffix.length() == 3)var->suffix=s2->suffix;
    else{
        if(s1->suffix.length()+s2->suffix.length() <= 3)var->suffix=s1->suffix+s2->suffix;
        else {
            var->suffix=s1->suffix.substr(0,3-(s2->suffix.length()))+s2->suffix;
        }
    }
    return var;
}


void solve(){
    int p;cin>>p;
    string s1,s2,s3,s4,s5;
    map<string,variable*> data;
    for(int i=0;i<p;++i){
        cin>>s1>>s2;
        if(s2==":="){
            cin>>s3;
            data[s1]=getVari(s3);
        }
        else{
            cin>>s3>>s4>>s5;
            data[s1]=add(data[s3],data[s5]);
        }
    }
    cout<<data[s1]->count<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
