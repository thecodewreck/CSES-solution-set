#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=5,ans=0;
    while(i<=n)
    {
        int x=i;
        while(x!=0 && x%5==0)
        {
            ans++;
            x=x/5;
        }
        i+=5;
    }
    cout<<ans;
}
