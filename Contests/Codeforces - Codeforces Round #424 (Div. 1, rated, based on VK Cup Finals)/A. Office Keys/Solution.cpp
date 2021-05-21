#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,p;
    cin>>n>>k>>p;
    vector<int> people(n);
    vector<int> key(k);
    for(int i=0;i<n;++i)cin>>people[i];
    for(int i=0;i<k;++i)cin>>key[i];
    sort(people.begin(),people.end());
    sort(key.begin(),key.end());
    int ans=INT_MAX;
    for(int i=0;i<=k-n;++i){
        vector<int> cur_ans(n,0);
        for(int j=0;j<n;++j){
            if(people[j] > p){
                if(key[i+j]<p){
                    cur_ans[j]=2*(p-key[i+j]);
                    cur_ans[j]+=(people[j]-p);
                }
                else if(key[i+j]>people[j]){
                    cur_ans[j]=2*(key[i+j]-people[j]);
                    cur_ans[j]+=(people[j]-p);
                }
                else{
                    cur_ans[j]=people[j]-p;
                }
            }
            else {
                if(key[i+j] < people[j]){
                    cur_ans[j]=2*(people[j]-key[i+j]);
                    cur_ans[j]+=(p-people[j]);
                }
                else if(key[i+j] > p){
                    cur_ans[j]=2*(key[i+j]-p);
                    cur_ans[j]+=(p-people[j]);
                }
                else{
                    cur_ans[j]=p-people[j];
                }
            }
        }
        int max_ans=0;
        for(int j=0;j<n;++j)max_ans=max(max_ans,cur_ans[j]);
        ans=min(max_ans,ans);
    }
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
