#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        k-=1;
        k%=4;
        if(x==y){
            cout<<n<<' '<<n<<endl;
        }
        else if(x>y){
            if(k==0){
                cout<<n<<' '<<n-x+y<<endl;
            }
            else if(k==1)
                cout<<n-x+y<<' '<<n<<endl;
            else if(k==2)
                cout<<0<<' '<<x-y<<endl;
            else if(k==3)
                cout<<x-y<<' '<<0<<endl;
        }
        else if(x<y){
            if(k==0)
                cout<<n+x-y<<' '<<n<<endl;
            else if(k==1)
                cout<<n<<' '<<n+x-y<<endl;
            else if(k==2)
                cout<<y-x<<' '<<0<<endl;
            else if(k==3)
                cout<<0<<' '<<y-x<<endl;
        }
    }
}