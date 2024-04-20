#include<bits/stdc++.h>
using namespace std;
bool check(int i,int j,int n,vector<vector<char>>v,vector<bool>cols)
    {
        if(cols[j]==true)
        return false;
int x=i,y=j;
        while(x>=0 && y>=0)
        {
            if(v[x][y]=='Q')
            return false;
            x--;y--;
        }
        x=i;y=j;
        while(x>=0 && y<n)
        {
            if(v[x][y]=='Q')
            return false;
            x--;
            y++;
        }
        if(v[i][j]=='*')
            return false;
        return true;
    }
    void solve(int n,int i,vector<vector<char>>v,int&ans,vector<bool>col)
    {
        if(i==n)
            {ans++;
            return;}
        for(int j=0;j<n;j++)
        {
            if(check(i,j,n,v,col))
            {
                v[i][j]='Q';
                col[j]=true;
                solve(n,i+1,v,ans,col);
                v[i][j]='.';
                col[j]=false;
            }
        }
    }
     int totalNQueens(int n,vector<vector<char>>v) {
         int ans=0;
        //vector<string>v(n,string(n,'.'));
        vector<bool>col(n,false);
        solve(n,0,v,ans,col);
        return ans;
    }
int main()
{
    int n=8;
    vector<vector<char>>board(8,vector<char>(8,'.'));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>board[i][j];
    }
    cout<<totalNQueens(8,board);
}
