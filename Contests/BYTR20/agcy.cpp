#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> qs(n,0);
    vector<int> qc(n,0);
    vector<int> e(n,0);
    int l,r;
    for(int i=0;i<q;++i){
        cin>>l>>r;
        qc[r-1]++,qs[l-1]++;
        e[r-1]+=(r-l+1);
    }
    int qo=0,vp=0;
    for(int i=0;i<n;++i){
        qo+=qs[i];
        cout<<vp+qo<<' ';
        vp=vp+qo;
        vp-=e[i];
        qo-=qc[i];
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}