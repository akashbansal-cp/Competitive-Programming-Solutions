#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=4;
    set<int> x;
    int temp;
    while(t--){
        cin>>temp;
        x.insert(temp);
    }
    cout<<4-x.size();
}
