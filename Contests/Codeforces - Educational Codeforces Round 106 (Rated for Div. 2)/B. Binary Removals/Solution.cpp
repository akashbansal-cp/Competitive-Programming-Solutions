#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string t=s;
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"YES"<<endl;return;
    }
    if(true){
        vector<int> temp;
        for(int i=0;i<s.length();++i){
            if(s[i]=='1')temp.push_back(i);
        }
        int k=0;
        for(k=0;k<temp.size()-1;++k){
            if(temp[k] >= temp[k+1]-1)break;
        }
        if(temp.size()==0 || k==temp.size()-1){
        cout<<"YES"<<endl;
            return;
        }
    }
    int n=s.length();
    int m=0;
    while(m<n){
        if(s[m]=='1'){
            vector<int> temp;
            for(int i=0;i<n;++i){
                if(i<m && s[i]=='1')temp.push_back(i);
                if(i>m && s[i]=='0')temp.push_back(i);
            }
            int k=0;
            for(k=0;k<temp.size()-1;++k){
                if(temp[k] >= temp[k+1]-1)break;
            }
            if(temp.size()==0 || k==temp.size()-1){
                cout<<"YES"<<endl;
                return;
            }
        }
        ++m;
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
