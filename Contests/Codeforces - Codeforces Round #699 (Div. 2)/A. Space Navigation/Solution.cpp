#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    string ins;
    cin>>ins;
    int l=0,r=0,u=0,d=0;
    int cur_x=0,cur_y=0;
    for(int i=0;i<ins.length();++i){
        if(ins[i]=='L')
            --l;
        else if(ins[i]=='R')
            ++r;
        else if(ins[i]=='U')
            ++u;
        else if(ins[i]=='D')
            --d;
    }
    if(x<=r && x>=l && y>=d && y<=u){
        cout<<"YES"<<endl;
    }
    else    
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
