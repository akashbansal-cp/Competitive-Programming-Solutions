#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int temp;
    map<int,int> data;
    vector<int> arr;
    for(int i=0;i<n;++i){
        cin>>temp;
        data[temp]++;
        arr.push_back(temp);
    }
    ll sum=0;
    vector<pair<int,int>> check;
    for(pair<const int,int>& e:data){
        sum+=((ll)e.first*(ll)e.second);
        check.push_back({e.first,e.second});
    }
    sum-=((ll)check.back().second*(ll)check.back().first);
    int i;
    for(i=check.size()-2;i>=0;--i){
        if(sum < check[i+1].first){
            break;
        }
        sum-=((ll)check[i].first*(ll)check[i].second);
    }
    int value = i==-1?0:check[i].first;
    int ans=0;
    for(int& e:arr){
        if(e > value)
            ++ans;
    }
    cout<<ans<<endl;
    for(int j=0;j<n;++j){
        if(arr[j]>value)
            cout<<j+1<<' ';
    }
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
