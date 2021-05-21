#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,w,temp;
    cin>>n>>w;
    vector<int> width(30,0);
    int z=n;
    for(int i=0;i<n;++i){
        cin>>temp;
        for(int j=0;j<30;++j){
            if(pow(2,j)==temp){
                width[j]++;
                break;
            }
        }
    }
    int h=0;
    // vector<bool> p(30,false);
    // temp=w;
    // for(int i=29;i>=0;--i){
    //     if(pow(2,i)<=temp){
    //         p[i]=true;
    //         temp-=pow(2,i);
    //     }
    // }
    while(true){
        int re=0;
        for(int e:width)re=max(re,e);
        if(re==0)break;
        ++h;
        temp=w;
        for(int i=29;i>=0;--i){
            if(pow(2,i) <= temp && width[i]!=0){
                int p=min(width[i],(int)(temp/pow(2,i)));
                temp-=p*pow(2,i);
                width[i]-=p;
            }
        }
    }
    cout<<h<<endl;

        
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
