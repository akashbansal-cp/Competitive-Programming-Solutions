#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;++i)cin>>data[i];
    stack<int> s;
    for(int i=0;i<n;++i){
        if(s.empty()==true)s.push(data[i]);
        else{
            int p=s.top()+data[i];
            if(p%2==0)s.pop();
            else s.push(data[i]);
        }
    }
    cout<<s.size()<<endl;
}