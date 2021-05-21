#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<string> data(n);
    for(int i=0;i<n;++i)
        cin>>data[i];
    vector<pair<int,int>> ver(n);
    vector<pair<int,int>> hor(n);
    for(int i=0;i<n;++i){
        int j=0;
        while(j<n && data[i][j]!='B')
            ++j;
        if(j==n){
            hor[i]={n,0};
            continue;
        }
        int k=n-1;
        while(k>=0 && data[i][k]!='B')
            --k;
        hor[i]={j,k-j+1};
    }
    for(int i=0;i<n;++i){
        int j=0;
        while(j<n && data[j][i]!='B')
            ++j;
        if(j==n){
            ver[i]={n,0};
            continue;
        }
        int k=n-1;
        while(k>=0 && data[k][i]!='B')
            --k;
        ver[i]={j,k-j+1};
    }
    vector<int> verini(n);
    verini[0]=ver[0].second==0?1:0;
    for(int i=1;i<n;++i){
        verini[i]=verini[i-1]+(ver[i].second==0?1:0);
    }
    vector<int> horini(n);
    horini[0]=hor[0].second==0?1:0;
    for(int i=1;i<n;++i)
        horini[i]=horini[i-1]+(hor[i].second==0?1:0);
    // for(auto e:ver)
    // ss
    //     cout<<e.first<<' '<<e.second<<endl;
    // cout<<endl;
    // for(auto e:hor)
    //     cout<<e.first<<' '<<e.second<<endl;
    // cout<<endl;
    int ans=0;
    vector<vector<int>> white(n,vector<int>(n,0));
    int cur=0;
    for(int i=0;i<=n-k;++i){
        cur=0;
        for(int j=0;j<=n-k;++j){
            if(j==0){
                for(int m=0;m<k;++m){
                    if(ver[m].first >= i && (ver[m].first+ver[m].second <= k+i || ver[m].second==0))
                        ++cur;
                }
            }
            else if(j!=0){
                if(ver[j-1].first >= i && (i+k >= ver[j-1].first+ver[j-1].second || ver[j-1].second==0))
                    --cur;
                if(ver[j+k-1].first >= i && (i+k >= ver[j+k-1].first+ver[j+k-1].second || ver[j+k-1].second==0))
                    ++cur;
            }
            white[i][j]=cur;
            // cout<<cur<<' ';
        }
        // cout<<endl;
    }
    cur = 0;
    pair<int,int> cordinate;
    for(int i=0;i<=n-k;++i){
        cur=0;
        for(int j=0;j<=n-k;++j){
            if(j==0){
                for(int m=0;m<k;++m){
                    if(hor[m].first >= i && (hor[m].first+hor[m].second <= k+i || hor[m].second==0))
                        ++cur;
                }
            }
            if(j!=0){
                if(hor[j-1].first >= i && (i+k >= hor[j-1].first+hor[j-1].second || hor[j-1].second==0))
                    --cur;
                if(hor[j+k-1].first >= i && (i+k >= hor[j+k-1].first+hor[j+k-1].second || hor[j+k-1].second==0))
                    ++cur;
            }
            // cout<<cur<<' ';
            white[j][i]+=cur;
        }
        // cout<<endl;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int s=verini[n-1]+horini[n-1]-(i+k-1<n ? verini[i+k-1]+horini[i+k-1] : 0)+(i!=0?verini[i-1]+horini[i-1]:0);
            // cout<<s<<' ';
            ans=max(ans,white[i][j]+s);
            // cout<<white[i][j]<<' ';
        }
        // cout<<endl;
    }
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    while (t--)
        solve();
    return 0;
}
