#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    if(n%2!=0){
        --k;
        int m=n/2;
        int x=k/m;
        k+=x;
        ++k;  
    }
    int m=k%n==0?n:k%n;
        cout<<m<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
