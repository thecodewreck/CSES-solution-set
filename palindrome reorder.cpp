#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    vector<int>arr(26,0);
    int odc=0;
    for(int i=0;i<n;i++)
    {
        arr[s[i]-'A']++;
        if(arr[s[i]-'A']&1)
            odc++;
        else
            odc--;
    }
    if(odc>1)
        cout<<"NO SOLUTION"<<endl;
    else
    {char temp='A';
    int j=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]&1)
                temp=i+'A';
            while(arr[i]>1)
            {
                    s[j]=i+'A';
                    s[n-j-1]=i+'A';
                    j++;
                    arr[i]-=2;
            }
        }
        if(odc==1)
            s[(n)/2]=temp;
        cout<<s;
    }
}
