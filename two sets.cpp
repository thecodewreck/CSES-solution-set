#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=(n*(n+1))/2;
    if(sum%2)
        cout<<"NO";
    else
    {
        cout<<"YES";
        vector<bool>a(n+1,false),b(n+1,false);
        int i=1,j=n;
        while(i<j)
        {
            if(i&1)
            {
                a[i]=true;
                a[j]=true;
            }
            else
            {
                b[i]=true;
                b[j]=true;
            }
            i++;j--;
        }
        int c1=0,c2=0;
        if(i==j)
        {
            if((i/2)%2==0)
            {
                a[1]=false;
                a[n]=false;
                b[1]=true;
                b[n]=true;
                b[i/2]=false;
                a[i]=true;
                a[i/2]=true;
            }
            else
            {
                a[i/2]=false;
                b[i/2]=true;
                b[i]=true;
            }
        }

            for(int i=1;i<=n;i++)
                if(a[i])
                c1++;
                else
                c2++;
            cout<<endl<<c1<<endl;
            for(int i=1;i<=n;i++)
                if(a[i])
                cout<<i<<" ";
            cout<<endl<<c2<<endl;
            for(int i=1;i<=n;i++)
                if(b[i])
                cout<<i<<" ";
    }
}
