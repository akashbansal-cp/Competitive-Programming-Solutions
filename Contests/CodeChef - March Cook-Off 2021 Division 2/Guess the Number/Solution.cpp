#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> p;
    int x=1;
    while(pow(x,2)<1000001){
        int m=pow(x,2);
        p.push_back(m);
        ++x;
    }
    int t;
    cin >> t;
    while (t--){
        for(int i=0;i<p.size();++i){
            cout<<p[i]<<endl;
            int x;
            cin>>x;
            if(x==1){
                break;
            }
        }
    }        
    return 0;
}
