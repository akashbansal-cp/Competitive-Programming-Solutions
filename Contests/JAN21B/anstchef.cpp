#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            int m;
            cin>>m;
            int temp;
            int neg=0,pos=0;
            for(int i=0;i<m;++i){
                cin>>temp;
                if(temp < 0)
                    ++neg;
                else 
                    ++pos;
            }
            cout<<neg*pos<<endl;
        }
    }
}