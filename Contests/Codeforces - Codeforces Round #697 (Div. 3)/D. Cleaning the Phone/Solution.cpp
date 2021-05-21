#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> memory(n);
    for(int i=0;i<n;++i)
        cin>>memory[i];
    vector<int> b1,b2;
    int temp;
    for(int i=0;i<n;++i){
        cin>>temp;
        if(temp==1)
            b1.push_back(memory[i]);
        else
            b2.push_back(memory[i]);
    }
    b1.push_back(0);
    sort(b1.begin(),b1.end(),greater<int>());
    sort(b2.begin(),b2.end(),greater<int>());
    int i=0,j=0,ans=0;
    while(i+1 < b1.size() && j<b2.size() && m>0){        
        if(b1[i]+b1[i+1]>=b2[j]){
            m-=b1[i];
            ++i;
            ++ans;
        }
        else if(m-b1[i]<=0){
            // cout<<'h';
            m-=b1[i];
            ++i,++ans;
        }
        else{
            // cout<<m-b1[i];
            m-=b2[j];
            ++j;
            ans+=2;;
        }
    }
    if(i+1<b1.size () && j>=b2.size() && m>0){
        while(i<b1.size()-1 && m>0){
            m-=b1[i];
            ++i;
            ++ans;    
        }
    }
    else if(i+1 >= b1.size() && j<b2.size()){
        while(j<b2.size() && m>0){
            m-=b2[j];
            ++j,ans+=2;
        }
    }
    if(m>0){
        cout<<-1<<endl;
    }
    else
        cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
