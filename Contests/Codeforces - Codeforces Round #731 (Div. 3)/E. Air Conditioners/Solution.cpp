#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> ac(k);
    for(int i=0;i<k;++i){
        cin>>ac[i].first;
        --ac[i].first;
    }
    for(int i=0;i<k;++i)cin>>ac[i].second;
    sort(ac.begin(),ac.end());
    multiset<int> left_ac;
    multiset<int> right_ac;
    for(int i=0;i<k;++i){
        right_ac.insert(ac[i].first+ac[i].second);
    }
    vector<int> temp(n);
    int j=0;
    for(int i=0;i<n;++i){
        int x=n-1-i;
        temp[i]=INT_MAX;
        if(right_ac.empty()==false){
            temp[i]=min(temp[i],(*(right_ac.begin())-i));
        }
        if(left_ac.empty()==false){
            temp[i]=min(temp[i],(*left_ac.begin())-x);
        }
        if(j<k && ac[j].first==i){
            right_ac.erase(right_ac.find(ac[j].first+ac[j].second));
            left_ac.insert(ac[j].second+x);
            ++j;
        }
    }
    for(int i=0;i<n;++i)cout<<temp[i]<<' ';
    cout<<endl;
}
int main()
{
    fio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
