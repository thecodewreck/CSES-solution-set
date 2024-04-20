#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a(n+1,0);
    a[0]=1;
    int mod=1e9+7;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j>=0)
                a[i]=(a[i]+a[i-j])%mod;
            else
                break;
        }
    }
    cout<<a[n];
}
