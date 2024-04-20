#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    long long i=0,j=n-1,k=(n+1)/2,ans=0;
    while(i<j)
    {
        ans+=abs(arr[k]-arr[i]);
        ans+=abs(arr[k]-arr[j]);
        i++;
        j--;
    }
    cout<<ans;
}
