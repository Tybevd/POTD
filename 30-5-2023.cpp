#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool dfs(int i,int j,vector<vector<char>> &board,int index,string &word)
{
    if(index==word.size())return true;
    if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[index])
    return false;
    char c=board[i][j];
    board[i][j]='#';
    bool res=dfs(i+1,j,board,index+1,word)||
    dfs(i-1,j,board,index+1,word)||
    dfs(i,j+1,board,index+1,word)||
    dfs(i,j-1,board,index+1,word);
    board[i][j]=c;
    return res;
}
bool isWordExist(vector<vector<char>>& board,string word)
{
    int n=board.size();
    int m=board[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(dfs(i,j,board,0,word))
            return true;
        }
    }
    return false;
}
