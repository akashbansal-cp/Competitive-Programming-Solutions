#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define precise(p) cout<<setprecision(p);
#define MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
int conv(string fin,string init){
    int x=0,y=0,p=0,m=0;
    if(fin.length() > init.length()){
        m=fin.length()-init.length();
        fin=fin.substr(0,init.length());
    }
    while(x<fin.length() && y<init.length()){
        if(fin[x]==init[y])++p,++x,++y;
        else{
            ++y;
        }
    }
    return fin.length()-p+m+init.length()-p;
}
void solve(vector<string>& data)
{
    string n;cin>>n;
    int ans = conv(data[0],n);
    for(int i=1;i<data.size();++i){
        ans=min(ans,conv(data[i],n));
        // cout<<n<<" --> "<<data[i]<<' '<<conv(data[i],n)<<endl;
    }
    cout<<ans<<endl;
}
int main()
{
    fio
    vector<string>data;
    int t;
    for(int i=0;i<59;++i){
        data.push_back(to_string((ll)pow((ll)2,i)));
    }
    cin >> t;
    while (t--)
        solve(data);
    return 0;
}
