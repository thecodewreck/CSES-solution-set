#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;cin>>n>>x;
    vector<int>b(n,0);
    for(int i=0;i<n;i++)
        cin>>b[i];
    int mod=1e9+7;
    vector<int>a(x+1,0);
    a[0]=1;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-b[j]>=0 && a[i-b[j]]!=INT_MAX)
                a[i]=(a[i]+a[i-b[j]])%mod;
        }
    }
    if(a[x]==INT_MAX)
        cout<<"-1";
    else
    cout<<a[x];
}



