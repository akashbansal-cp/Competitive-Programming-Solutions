#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        cin>>n>>k>>d;
        int total=0;
        int temp;
        for(int i=0;i<n;++i){
            cin>>temp;
            total+=temp;
        }
        cout<<min(d,total/k) << endl;
    }
    return 0;
}