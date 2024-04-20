#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<1;
    else if(n<4)
        cout<<"NO SOLUTION";
    else
    {
        int i=1,j=n/2+1;
        while(i<n/2+1 || j<=n)
        {
            if(j<=n)
                cout<<j<<" ";
            if(i<n/2+1)
            cout<<i<<" ";
            i++;
            j++;
        }
    }
}
