#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define  MOD 1000000007
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
pair<int,int> _find(int z,vector<vector<int>>& arr,vector<pair<int,int>>& head,int p){
    pair<int,int> x=head[z];
    int _z=x.second-p;
    int n=arr[x.first].size();
    if(_z<0){
        _z*=-1;
        if(_z%n==0){
            _z=0;
        }
        else{
            _z%=n;
            _z=n-_z;
        }
    }
    // while(_z < 0){
    //     _z+=arr[x.first].size();
    // }
    return {x.first,_z};
}
void solve()
{
    int n,q;
    cin>>n;
    vector<int> a(n);
    vector<int> p(n);
    for(int i=0;i<n;++i){cin>>a[i];}
    for(int i=0;i<n;++i){cin>>p[i];--p[i];}
    vector<vector<int>> arr;
    vector<pair<int,int>> head(n);
    vector<bool> visited(n,false);
    for(int i=0;i<n;++i){
        if(visited[i]==true){
            continue;
        }
        else{
            visited[i]=true;
            arr.push_back({a[i]});
            int x=arr.size()-1,y=1;
            head[i]={x,0};
            int j=p[i];
            while(j!=i){
                visited[j]=true;
                arr[x].push_back(a[j]);
                head[j]={x,y};
                ++y;
                j=p[j];
            }
        }
    }
    // for(auto e:head)cout<<e.first<<' '<<e.second<<endl;
    // for(auto e:arr){
    //     for(auto f:e)cout<<f<<' ';
    //     cout<<endl;
    // }
    int m,x,y;
    pair<int,int> _x;
    pair<int,int> _y;
    int z=0;
    cin>>q;
    for(int i=0;i<q;++i){
        // for(auto e:arr){
        //     cout<<"---";
        //     for(auto f:e)cout<<f<<' ';
        //     cout<<endl;
        // }
        // for(int i=0;i<n;++i){
        //     pair<int,int> __x=_find(i,arr,head,z);
        //     cout<<arr[__x.first][__x.second]<<' ';
        // }
        // cout<<endl;
        cin>>m;
        if(m==1)++z;
        else if(m==2){
            cin>>x>>y;
            _x=_find(x-1,arr,head,z);
            // cout<<x-1<<' '<<_x.first<<' '<<_x.second<<endl;
            _y=_find(y-1,arr,head,z);
            // cout<<y-1<<' '<<_y.first<<' '<<_y.second<<endl;
            swap(arr[_x.first][_x.second],arr[_y.first][_y.second]);
        }
        else if(m==3){
            cin>>x;
            _x=_find(x-1,arr,head,z);
            // cout<<x-1<<' '<<_x.first<<' '<<_x.second<<endl;
            cout<<arr[_x.first][_x.second]<<endl;
        }
    }
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
