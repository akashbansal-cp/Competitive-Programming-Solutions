#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s,p;
    cin>>s>>p;
    int ar=0,ac=0;
    for(int i=0;i<n;++i){
        if(s[i]=='1' && p[i]=='1')
            continue;
        else if(s[i]=='1' && p[i]=='0')
            ++ar;
        else if(s[i]=='0' && p[i]=='0'){
            if(ar%2==0){
                ac+=ar;
                ar = 0;
            }
            else{
                ac=ar+ac-1;
                ar = 1;
            }
        }
        else if(s[i]=='0' && p[i]=='1'){
            if(ar !=0){
                --ar;
            }
            else if(ac==0){
                cout<<"No"<<endl;
                return ;
            }
            else{
                ac-=2;
                ar+=1;
            }
        }
    }
    if(ar == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}