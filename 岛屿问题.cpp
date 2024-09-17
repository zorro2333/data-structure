//
// Created by 左政 on 2024/3/16.
//
#include "vector"
#include "iostream"
using namespace std;
//给你一个由 '1'（陆地）和 '0'（水）组成的的二维网格，请你计算网格中岛屿的数量。
//
//岛屿总是被水包围，并且每座岛屿只能由水平方向和/或竖直方向上相邻的陆地连接形成。
//
//此外，你可以假设该网格的四条边均被水包围。

void dfs(vector<vector<char>>& grid,int i,int j ){
    if(i<0||j<0||i>=grid.size()||j>=grid[0].size()) return;
    if(grid[i][j]=='1'){
        grid[i][j]=2;//避免重复递归岛屿
        dfs(grid,i-1,j);//递归各个方向
        dfs(grid,i+1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
}
int numIslands(vector<vector<char>> &grid){
    int ans=0;
    int n=grid.size();
    int m=grid[0].size();
    for(int i=0;i<n;++i) {
        for (int j = 0; j < m; ++j) {
            if(grid[i][j]=='1') ans++;
            dfs(grid,i,j);
        }
    }
    return ans;
}