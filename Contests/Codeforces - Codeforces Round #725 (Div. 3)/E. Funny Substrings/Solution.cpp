#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
struct variables
{
    ll length=0;
    string start;
    ll s_length;
    string end;
    ll e_length;
    ll consts=0;
    variables(){
        length=0,s_length=0,e_length=0;
        start="",end="",consts=0;
    }
};

variables* assign(string val){
    variables* var = new variables();
    int n=val.length();
    var->length=n;
    var->consts=0;
    // start
    if(val[0]!='h' && val[0]!='a');
    else{
        bool dir = (val[0]=='h') ? true : false;
        int l=1;
        for(int i=1;i<n;++i){
            if(dir == true && val[i]=='a')++l,dir=!dir;
            else if(dir == false && val[i]=='h')++l,dir=!dir;
            else break;
        }
        var->start=val[0];
        var->s_length=l;
    }
    //end
    if(val[n-1]!='h' && val[n-1]!='a');
    else{
        bool dir = (val[n-1]=='h') ? true : false;
        int l=1;
        for(int i=n-2;i>=0;--i){
            if(dir == true && val[i]=='a')++l,dir=!dir;
            else if(dir == false && val[i]=='h')++l,dir=!dir;
            else break;
        }
        var->end=val[n-1];        
        var->e_length=l;
    }
    
    // cout<<val<<' '<<var->length<<' '<<var->consts<<' '<<var->start<<' '<<var->s_length<<' '<<var->end<<' '<<var->e_length<<endl;
    return var;    
}

variables* addition(string var,string val1,string val2,variables* v1,variables* v2){
    variables* v = new variables();
    v->length=v1->length+v2->length;
    if(v1->length == v1->s_length && v2->length == v2->s_length){
        if((v1->end=="h" && v2->start=="a") || (v1->end=="a" && v2->start=="h")){
            v->s_length=v->length,v->e_length=v->length;
            v->start=v1->start,v->end=v2->end;
        }
        else{
            v->s_length=v1->s_length,v->start=v1->start;
            v->e_length=v2->e_length,v->end=v2->end;
        }
    }
    else if(v1->length == v1->s_length){
        v->e_length=v2->e_length,v->end=v2->end;
        if((v1->end=="h" && v2->start=="a") || (v1->end=="a" && v2->start=="h")){
            v->s_length=v1->s_length+v2->s_length;
            v->start=v1->start;
        }
        else{
            v->start=v1->start,v->s_length=v1->s_length;
            if(v2->start=="h" && v2->s_length>2)v->consts+=((v2->s_length-2)/2);
            else if(v->start=="a" && v->s_length>3)v->consts+=((v2->s_length-3)/2);
        }
    }
    else if(v2->length == v2->s_length){
        v->start=v1->start,v->s_length=v1->s_length;
        if((v1->end=="h" && v2->start=="a") || (v1->start=="h" && v2->start=="h")){
            v->end = v2->end,v2->e_length=v1->e_length+v2->s_length;
        }
        else{
            v->end = v2->end,v->e_length=v2->e_length;
            if(v1->end=="h" && v1->e_length>3)v->consts+=((v1->e_length-3)/2);
            else if(v1->end=="a" && v1->e_length>2)v->consts+=((v1->e_length-2)/2);
        }
    }
    else{
        v->start=v1->start,v->s_length=v1->s_length;
        v->e_length=v2->e_length,v->end=v2->end;
        if((v1->end=="h" && v2->start=="a") || (v1->end=="a" && v2->start=="h")){
            int p=v1->e_length+v2->s_length;
            string m = (v1->e_length%2==0) ? v2->start : v1->end;
            if(m=="h" && p>2)v->consts+=((p-2)/2);
            else if(m=="a" && p>3)v->consts+=((p-3)/2);
        }
        else{
            if(v2->start=="h" && v2->s_length>2)v->consts+=((v2->s_length-2)/2);
            else if(v->start=="a" && v->s_length>3)v->consts+=((v2->s_length-3)/2);
            if(v1->end=="h" && v1->e_length>3)v->consts+=((v1->e_length-3)/2);
            else if(v1->end=="a" && v1->e_length>2)v->consts+=((v1->e_length-2)/2);
        }
    }
    v->consts+=(v1->consts+v2->consts);
    // cout<<' '<<v->length<<' '<<v->consts<<' '<<v->start<<' '<<v->s_length<<' '<<v->end<<' '<<v->e_length<<endl;
    return v;
}
ll getAns(variables* var){
    ll p=0;
    p=var->consts;
    if(var->start=="h" && var->s_length>2)p+=((var->s_length-2)/2);
    else if(var->start=="a" && var->s_length>3)p+=((var->s_length-3)/2);
    if(var->length!=var->s_length){
        if(var->end=="h" && var->e_length>3)p+=((var->e_length-3)/2);
        else if(var->end=="a" && var->e_length>2)p+=((var->e_length-2)/2);
    }
    return p;
    return 0;
}

void solve()
{
    int n;cin>>n;
    map<string,variables*> data;
    string var,val1,val2,equal,plus;
    for(int i=0;i<n;++i){
        cin>>var>>equal;
        if(equal==":="){
            cin>>val1;
            data[var]=assign(val1);
        }
        else if(equal=="="){
            cin>>val1>>plus>>val2;
            data[var]=addition(var,val1,val2,data[val1],data[val2]);
        }
    }
    cout<<getAns(data[var])<<endl;
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
