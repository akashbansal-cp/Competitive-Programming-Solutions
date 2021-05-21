#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans=0;
    int x=30;
    while(x>=0){
        if(t >= pow(2,x)){
            // cout<<x<<endl;
            t-=pow(2,x);
            ++ans;
        }
        --x;
    }
    cout<<ans<<endl;
    return 0;
}
