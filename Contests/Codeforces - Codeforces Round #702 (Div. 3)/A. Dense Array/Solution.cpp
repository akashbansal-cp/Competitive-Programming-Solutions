#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(data[i] > data[i+1]){
            // cout<<data[i]<<data[i+1]<<endl;;
            int m=data[i+1];
            // cout<<dou(data[i]/m)<<m<<endl;
            if((double)data[i]/(double)m > 2){
                // cout<<data[i]<<m<<endl;
                while(m<data[i]){
                    ++ans;
                    m*=2;
                }
                --ans;
                // cout<<ans<<endl;
            }
        }
        else{
            // cout<<data[i]<<data[i+1]<<endl;
            if((double)data[i+1]/(double)data[i]>2){
                while(data[i]<data[i+1]){
                    ++ans;
                    data[i]=data[i]*2;
                }
                --ans;
            }
        }
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
