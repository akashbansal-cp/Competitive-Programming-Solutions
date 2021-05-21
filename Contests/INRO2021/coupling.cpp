#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp;
        for(int i=0;i<n;++i){
            cin>>temp;
            if((temp&2)==0){
                cout<<temp+2<<' ';
            }
            else if((temp&2) == 2){
                cout<<temp-2<<' ';
            }
        }
        cout<<endl;
    }
}