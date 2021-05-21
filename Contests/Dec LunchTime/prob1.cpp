#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin>>str;
    map<char,int> data;
    for(char a:str)
        data[a]++;
    int d=0,s=0;
    for(auto itr:data){
        d+=(itr.second)/2;
        if(itr.second % 2 !=0)
            s+=1;
    }
    int ans = 0;
    if(s>=d){
        cout<<d<<endl;
        return ;
    }
    if(s<d){
        d-=s;
        d*=2;
        d/=3;
        s+=d;
        cout<<s<<endl;
        return ;
    }


}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}