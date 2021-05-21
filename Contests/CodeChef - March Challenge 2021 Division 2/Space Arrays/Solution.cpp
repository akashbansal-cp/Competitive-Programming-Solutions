#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int temp;
    ll sum=0;
    vector<int> data(n);
    for(int i=0;i<n;++i){
        cin>>temp;
        data[i]=temp;
        sum+=temp;
    }
    sort(data.begin(),data.end());
    for(int i=0;i<n;++i){
        if(data[i]>i+1){
            cout<<"Second"<<endl;
            return;
        }
    }
    ll x=(ll)n*(ll)(n+1);
    x/=2;
    if(x<sum){
        cout<<"Second"<<endl;
        return;
    }
    x-=sum;
    if(x%2==0)
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
