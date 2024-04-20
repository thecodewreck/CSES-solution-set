#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;cin>>n>>x;
    vector<int>b(n,0);
    for(int i=0;i<n;i++)
        cin>>b[i];
    vector<int>a(x+1,INT_MAX);
    a[0]=0;
    //sort(b.begin(),b.end());
    //int mod=1e9+7;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-b[j]>=0 && a[i-b[j]]!=INT_MAX)
                a[i]=min(a[i],a[i-b[j]]+1);
        }
    }
    if(a[x]==INT_MAX)
        cout<<"-1";
    else
    cout<<a[x];
}

