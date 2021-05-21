#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c;
    cin>>n>>c;
    vector<int> salary(n);
    for(int i=0;i<n;++i)cin>>salary[i];
    vector<int> course(n);
    for(int i=1;i<n;++i)cin>>course[i];
    vector<ll> open(n);
    vector<ll> days(n);
    vector<ll> work(n);
    open[0]=0,days[0]=0,work[0]=ceil((double)c/salary[0]);
    ll course_cost,day,comp_cost;
    for(int i=1;i<n;++i){
        course_cost=course[i]-open[i-1];
        day=ceil((double)course_cost/salary[i-1]);
        open[i]=(day*salary[i-1])-course_cost;
        days[i]=day+1;
        comp_cost=c-open[i];
        work[i]=ceil((double)comp_cost/salary[i]);
    }
    ll total=LLONG_MAX,cur_days=0;
    for(int i=0;i<n;++i){
        cur_days+=days[i];
        total=min(total,cur_days+work[i]);
    }
    cout<<total<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
