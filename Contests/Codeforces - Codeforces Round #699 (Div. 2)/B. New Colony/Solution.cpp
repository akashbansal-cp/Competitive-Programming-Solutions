#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    bool flag = true;
    vector<int> heights(n);
    for(int i=0;i<n;++i)
        cin>>heights[i];
    int j;
    for(int i=0;i<k;++i){
        flag = true;
        for(j=0;j<n-1;++j){
            if(heights[j+1] > heights[j]){
                if(i==k-1){
                    cout<<j+1<<endl;
                    return;
                }
                flag = false;
                ++heights[j];
                break;
            }
        }
        if(j==n-1 && flag == true){
            cout<<-1<<endl;
            return;
        }
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
