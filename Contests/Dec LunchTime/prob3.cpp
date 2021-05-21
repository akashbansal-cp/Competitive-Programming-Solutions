#include<bits/stdc++.h>
using namespace std;
void  solve(){
    int n;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    int lons=1;
    int ans = 0;
    for(int i=0;i<n-1;++i){
        if(data[i]==data[i+1]){
            ++lons;
        }
        else{
            if(lons%2!=0){
                ++ans;
            }
            lons = 1;
        }
    }
    ans+=(lons%2);
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}