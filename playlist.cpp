#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    map<int,int>m;
    int ans=1,start=0;
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]>0)
        {
            ans=max(ans,i-start);
            start=max(m[arr[i]],start);
            m[arr[i]]=i+1;
        }
        else
        m[arr[i]]=i+1;
    }
    cout<<max(ans,n-start);
}
