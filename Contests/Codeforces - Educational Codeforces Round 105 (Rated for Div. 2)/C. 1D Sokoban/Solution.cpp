#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> box(n);
    for(int i=0;i<n;++i)cin>>box[i];
    vector<int> special(m);
    for(int i=0;i<m;++i)cin>>special[i];

    //find pos for zero
    int i=0,j=n-1;
    while(j-i>1){
        if(box[(i+j)/2] > 0)
            j=(i+j)/2;
        else
            i=(i+j)/2;
    }
    int x=0,y=m-1;
    while(y-x>1){
        if(special[(x+y)/2]>0)
            y=(x+y)/2;
        else
            x=(x+y)/2;
    }
    // cout<<i<<' '<<j<<' '<<x<<' '<<y<<endl;
    int ans=0;
    if(box[i]<=0 && special[x]<=0 && (box[i]>=special[0])){
        int _x=0;
        if(box[0]<special[0]){
            int _y=n-1;
            while(_y-_x>1){
                if(special[0]>box[(_x+_y)/2])
                    _y=(_x+_y)/2;
                else
                    _x=(_x+_y)/2;
            }
            if(_x > i)
                _x=i;
            // while(_x < i && special[0]>box[_x]){
            //     ++x;
            // }
        }
        // cout<<_x<<' ';
        ans+=min(i-_x+1,x+1);
        // cout<<ans<<endl;
    }
    if(box[i]>0 && j>0)
        --j;
    if(special[x]>0 && y>0)
        --y;
    // cout<<j<<' '<<y<<endl;
    if(box[j]>0 && special[y]>0 && (box[j] <= special[m-1])){
        int _y=n-1;
        // cout<<_y<<' ';
        if(box[_y]>special[m-1]){
            int _x=0;
            while(_y-_x>1){
                if(special[m-1]<box[(_x+_y)/2])
                    _x=(_x+_y)/2;
                else
                    _y=(_x+_y)/2;
            }
            if(_y > j)
                _y=j;
            // while(_y>j && special[m-1]<box[_y])
            //     --_y;
        }
        // cout<<_y<<' ';
        ans+=min(_y-j+1,m-y);
        // cout<<ans<<endl;
    }   
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
