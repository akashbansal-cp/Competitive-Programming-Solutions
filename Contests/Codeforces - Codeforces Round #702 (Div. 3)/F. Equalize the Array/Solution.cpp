#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,temp;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    sort(data.begin(),data.end());
    vector<int> arr;
    data.push_back(-1);
    temp=0;
    for(int i=0;i<n;++i){
        if(data[i]!=data[i+1]){
            arr.push_back(temp+1);
            temp=0;
        }
        else{
            ++temp;
        }
    }
    sort(arr.begin(),arr.end());
    vector<pair<int,int>> d;
    int suf_sum=0;
    temp=0;
    int total=0;
    arr.push_back(-1);
    for(int i=0;i<arr.size()-1;++i){
        if(arr[i]!=arr[i+1]){
            ++temp;
            d.push_back({arr[i],temp});
            suf_sum+=(arr[i]*temp);
            total+=temp;
            temp=0;
        }
        else
            ++temp;
    }
    int pre_sum=0;
    int ans=INT_MAX;
    for(int i=0;i<d.size();++i){
        suf_sum-=(d[i].first*d[i].second);
        total-=d[i].second;
        int new_ans=pre_sum+suf_sum-(total*d[i].first);
        ans=min(ans,new_ans);
        pre_sum+=((ll)d[i].first*(ll)d[i].second);
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
