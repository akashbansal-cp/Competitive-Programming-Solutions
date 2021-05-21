#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> data(n);
    for(int i=0;i<n;++i){
        cin>>data[i];
        while(data[i]%2==0)
            data[i]/=2;
    }
    while(k%2==0)
        k/=2;
    for(int i=0;i<n;++i){
        if(data[i]%k!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
