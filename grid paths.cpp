#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool check(int i,int j,int n,int m,vector<vector<bool>>&mat)
{
    if(i<0 || i>=n || j<0 || j>=m || mat[i][j])
        return false;
    return true;
}
void solve(int x,int y,int i,vector<vector<bool>>mat,string&s)
{
    if(x==0 && y==6 && i==48 && cout<<ans)
        ans++;
    else if(check(x,y,7,7,mat))
    {
        mat[x][y]=true;
        if(s[i]=='?')
        {
            solve(x,y+1,i+1,mat,s);
            solve(x,y-1,i+1,mat,s);
            solve(x+1,y,i+1,mat,s);
            solve(x-1,y,i+1,mat,s);
        }
        else if(s[i]=='R')
        solve(x,y+1,i+1,mat,s);
        else if(s[i]=='U')
        solve(x-1,y,i+1,mat,s);
        else if(s[i]=='D')
        solve(x+1,y,i+1,mat,s);
        else
        solve(x,y-1,i+1,mat,s);
    }
}
int main()
{
    vector<vector<bool>>mat(7,vector<bool>(7,false));
    string s;
    cin>>s;
    solve(0,0,0,mat,s);
    cout<<ans;
}
