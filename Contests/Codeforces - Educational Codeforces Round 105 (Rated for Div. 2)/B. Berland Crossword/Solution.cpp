#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    vector<int> t(4);
    cin>>n;
    for(int i=0;i<4;++i)cin>>t[i];
    if(t[0]<=n-2 && t[1]<=n-2 && t[2]<=n-2 && t[3]<=n-2){
        cout<<"YES"<<endl;return;
    }
    // bruteforce
    // A

    if(t[0] >= 1 && t[3] >= 1 && t[0]-1<=n-2 && t[1]<=n-2 && t[2]<=n-2 && t[3]-1<=n-2){
        cout<<"YES"<<endl;return;
    }
    //B
    if(t[0] >= 1 && t[1] >= 1 && t[0]-1<=n-2 && t[1]-1<=n-2 && t[2]<=n-2 && t[3]<=n-2){
        cout<<"YES"<<endl;return;
    }
    //C
    if(t[1] >= 1 && t[2] >= 1 && t[0]<=n-2 && t[1]-1<=n-2 && t[2]-1<=n-2 && t[3]<=n-2){
        cout<<"YES"<<endl;return;
    }
    //D
    if(t[2] >= 1 && t[3] >= 1 && t[0]<=n-2 && t[1]<=n-2 && t[2]-1<=n-2 && t[3]-1<=n-2){
        cout<<"YES"<<endl;return;
    }
    //AB
    if(t[0] >= 2 && t[1] >= 1 && t[3] >= 1 && t[0]-2<=n-2 && t[1]-1<=n-2 && t[2]<=n-2 && t[3]-1<=n-2){
        cout<<"YES"<<endl;return;
    }
    //AC
    if(t[0] >= 1 && t[1] >= 1 && t[2] >= 1 && t[3]>=1 && t[0]-1<=n-2 && t[1]-1<=n-2 && t[2]-1<=n-2 && t[3]-1<=n-2){
        cout<<"YES"<<endl;return;
    }
    //AD
    if(t[0] >= 1 && t[2] >= 1 && t[3] >= 2 && t[0]-1<=n-2 && t[1]<=n-2 && t[2]-1<=n-2 && t[3]-2<=n-2){
        cout<<"YES"<<endl;return;
    }
    //BC
    if(t[0] >= 1 && t[1] >= 2 && t[2] >= 1 && t[0]-1<=n-2 && t[1]-2<=n-2 && t[2]-1<=n-2 && t[3]<=n-2){
        cout<<"YES"<<endl;return;
    }
    //BD
    // if(t[0]<=n-2 && t[1]<=n-2 && t[2]<=n-2 && t[3]<=n-2){
    //     cout<<"YES"<<endl;return;
    // }
    //CD
    if(t[1] >= 1 && t[2] >= 2 && t[3] >= 1 && t[0]<=n-2 && t[1]-1<=n-2 && t[2]-2<=n-2 && t[3]-1<=n-2){
        cout<<"YES"<<endl;return;
    }
    //ABC
    if(t[0] >= 2 && t[1] >= 2 && t[2] >= 1 && t[3] >= 1 && t[0]-2<=n-2 && t[1]-2<=n-2 && t[2]-1<=n-2 && t[3]-1<=n-2){
        cout<<"YES"<<endl;return;
    }
    //ABD
    if(t[0] >= 2 && t[1] >= 1 && t[2] >= 1 && t[3] >= 2 && t[0]-2<=n-2 && t[1]-1<=n-2 && t[2]-1<=n-2 && t[3]-2<=n-2){
        cout<<"YES"<<endl;return;
    }
    //ACD
    if(t[0] >= 1 && t[1] >= 1 && t[2] >= 2 && t[3] >= 2 && t[0]-1<=n-2 && t[1]-1<=n-2 && t[2]-2<=n-2 && t[3]-2<=n-2){
        cout<<"YES"<<endl;return;
    }
    //BCD
    if(t[0] >= 1 && t[1] >= 2 && t[2] >= 2 && t[3] >= 1 && t[0]-1<=n-2 && t[1]-2<=n-2 && t[2]-2<=n-2 && t[3]-1<=n-2){
        cout<<"YES"<<endl;return;
    }
    //ABCD
    if(t[0] >= 2 && t[1] >= 2 && t[2] >= 2 && t[3] >= 2 && t[0]-2<=n-2 && t[1]-2<=n-2 && t[2]-2<=n-2 && t[3]-2<=n-2){
        cout<<"YES"<<endl;return;
    }
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
