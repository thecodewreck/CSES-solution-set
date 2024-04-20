#include<bits/stdc++.h>
using namespace std;
string check(int a,int b)
{
    int x=2*a-b,y=2*b-a;
    if(x<0 || y<0 || x%3 || y%3)
        return "NO";
    return "YES";
}
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        cout<<check(a,b)<<endl;
    }
}
