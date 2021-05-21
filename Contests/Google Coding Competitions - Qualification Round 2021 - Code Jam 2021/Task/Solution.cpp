#include<bits/stdc++.h>
using namespace std;
int revsort(vector<int> arr){
    int ans=0,n=arr.size();
    for(int i=0;i<n-1;++i){
        int min_ind=i;
        for(int j=i+1;j<n;++j){
            if(arr[j]<arr[min_ind])min_ind=j;   
        }
        ans+=(min_ind-i+1);
        reverse(arr.begin()+i,arr.begin()+min_ind+1);
    }
    return ans;
}
void solve(int p){
    int n,c;
    cin>>n>>c;
    vector<int> arr(n);
    for(int i=0;i<n;++i)arr[i]=i+1;
    int cost=n-1;
    if(c+1 > n*(n+1)/2){
        cout<<"case #"<<p<<": IMPOSSIBLE"<<endl;
        return;
    }
    int i=0;
    while(cost < c){
        --cost;
        int curr_cost = min(n-i,c-cost);
        reverse(arr.begin()+i,arr.begin()+i+curr_cost);
        cost+=curr_cost;
        ++i;
    }
    if(cost > c){
        cout<<"case #"<<p<<": IMPOSSIBLE"<<endl;
    }
    else{
        cout<<"case #"<<p<<": ";
        for(int e:arr)cout<<e<<' ';
        cout<<endl;
        cout<<revsort(arr)-c<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    int p=1;
    while(t--){
        solve(p);
        ++p;
    }
}