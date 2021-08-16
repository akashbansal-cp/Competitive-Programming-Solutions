#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> sp(n);
    for(int i=0;i<n;++i)cin>>sp[i];
    vector<pair<int,int>> sp2(n);
    for(int i=0;i<n;++i){
        sp2[i]={sp[i],i};
    }
    sort(sp2.begin(),sp2.end());
    
}
