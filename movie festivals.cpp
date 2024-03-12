#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v[i]={b,a};
    }
    int endtime=-1,ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        auto k=v[i];
        if(k.second>=endtime)
        {
            endtime=k.first;
            ans++;
        }
    }
    cout<<ans<<endl;
}
