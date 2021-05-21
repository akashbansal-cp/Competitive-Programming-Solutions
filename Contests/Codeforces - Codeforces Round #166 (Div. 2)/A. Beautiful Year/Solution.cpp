#include <bits/stdc++.h>
using namespace std;
bool checkDistinct(int n){
    set<int> t;
    while(n!=0){
        t.insert(n%10);
        n/=10;
    }
    if(t.size()==4)return true;
    return false;
}
void solve()
{
    int n;
    cin>>n;
    ++n;
    while(checkDistinct(n)==false){
        ++n;
    }
    cout<<n<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
