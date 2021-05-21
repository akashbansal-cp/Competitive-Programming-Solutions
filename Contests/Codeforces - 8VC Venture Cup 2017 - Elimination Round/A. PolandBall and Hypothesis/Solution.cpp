#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<bool> prime(1000002,true);
    for(int i=2;i<1000002;++i){
        if(prime[i]==true){
            int j=2;
            while(j*i<1000003){
                prime[i*j]=false;
                ++j;
            }
        }
    }
    for(int i=1;i<1001;++i){
        if(prime[(i*n)+1]==false){
            cout<<i<<endl;
            return;
        }
    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
