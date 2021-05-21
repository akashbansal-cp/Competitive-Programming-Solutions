#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    if(k==0){
        cout<<"Yes"<<endl;
        for(int i=0;i<b;++i)
            cout<<1;
        for(int i=0;i<a;++i)
            cout<<0;
        cout<<endl;
        for(int i=0;i<b;++i)
            cout<<1;
        for(int i=0;i<a;++i)
            cout<<0;
    }
    else if(b>=2 && a!=0 && k<=a+b-2){
        b-=2;
        a-=1;
        int m,n;
        if(a >= k-1){
            m=k-1;
            a=a-k+1;
            n=0;
        }
        else{
            m=a;
            a=0;
            n=k-1-m;
            b-=n;
        }
        // cout<<m+n<<endl;
        cout<<"Yes"<<endl;
        cout<<1;
        for(int i=0;i<a;++i)
            cout<<0;
        for(int i=0;i<b;++i)    
            cout<<1;
        cout<<1;
        for(int i=0;i<m;++i)
            cout<<0;
        for(int i=0;i<n;++i)
            cout<<1;
        cout<<0;
        cout<<endl;


        cout<<1;
        for(int i=0;i<a;++i)
            cout<<0;
        for(int i=0;i<b;++i)    
            cout<<1;
        cout<<0;
        for(int i=0;i<m;++i)
            cout<<0;
        for(int i=0;i<n;++i)
            cout<<1;
        cout<<1;
        cout<<endl;

    }
    else
        cout<<"No"<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
