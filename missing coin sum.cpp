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
    long long sum=0,i=0;
    while(i<n && sum+1>=arr[i])
    {
        sum+=arr[i++];
    }
    cout<<sum+1;
}
