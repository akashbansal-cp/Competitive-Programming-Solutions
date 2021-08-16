#include <bits/stdc++.h>
using namespace std;

int merge(vector<int>& arr, vector<int>& temp, int l, int m,int r)
{
    int i, j, k;
    int inv_count = 0;
 
    i = l;
    j = m;
    k = l; 
    while ((i <= m - 1) && (j <= r)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
 
            inv_count = inv_count + (m - i);
        }
    }
 
    while (i <= m - 1)
        temp[k++] = arr[i++];
 
    while (j <= r)
        temp[k++] = arr[j++];
 
    for (i = l; i <= r; i++)
        arr[i] = temp[i];
 
    return inv_count;
}
 
int _mergeSort(vector<int>& arr,vector<int>& temp, int l, int r)
{
    int m, inv_count = 0;
    if (r > l) {
        m = (r + l) / 2;
        inv_count += _mergeSort(arr, temp, l, m);
        inv_count += _mergeSort(arr, temp, m + 1, r);
        inv_count += merge(arr, temp, l, m + 1, r);
    }
    return inv_count;
}
int mergeSort(vector<int>& arr, int n)
{
    vector<int> temp(n);
    return _mergeSort(arr, temp, 0, n - 1);
}
 

 
int main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i)cin>>arr[i];
    int ans = mergeSort(arr, n);
    cout<< ans<<endl;
    return 0;
}
 