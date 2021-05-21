#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    vector<pair<int,int>> interval;
    vector<int> ans(n);
    interval = {{0,n-1}};
    for(int i=0;i<100;++i){
        vector<pair<int,int>> arr;
        arr=interval;
        interval={};
        for(int j=0;j<arr.size();++j){
            int index=arr[j].first;
            int value=data[index];
            for(int k=arr[j].first+1;k<=arr[j].second;++k){
                if(data[k] > value){
                    value=data[k];
                    index=k;
                }
            }
            ans[index]=i;
            if(arr[j].first <= index-1)
                interval.push_back({arr[j].first,index-1});
            if(index+1 <= arr[j].second)
                interval.push_back({index+1,arr[j].second});
        }
        
    }
    for(int e:ans)
        cout<<e<<' ';
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
