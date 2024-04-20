#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int value(int x,int y)
{
    if(y==0)
        return 1;
    else if(y%2==0)
        return value((x%mod)*(x%mod)%mod,y/2);
    else
       return value(x+x,y-1);
}
int main()
{
 int n;
 cin>>n;
 cout<<value(2,n);
}
