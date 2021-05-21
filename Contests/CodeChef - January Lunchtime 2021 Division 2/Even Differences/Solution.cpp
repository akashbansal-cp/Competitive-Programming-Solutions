#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    int odd=0,even=0,temp;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>temp;
        if(temp%2==1)
            ++odd;
        else
            ++even;
    }
    cout<<min(odd,even)<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
