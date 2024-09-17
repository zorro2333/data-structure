//
// Created by 左政 on 2023/11/23.
//
#include <iostream>

using namespace std;
int const N=1e3+7;
int n,m;
int sx,sy;
int a[N][N];
bool vis[N][N];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

int dfs(int x,int y){
    vis[x][y]=1;
    int res=1;
    for(int i=0;i<4;++i){
        int bx=x+dx[i];
        int by=y+dy[i];
        if(bx<1||by<1||bx>n||by>m||vis[bx][by]==1) continue;
        if(gcd(a[x][y],a[bx][by])==1) continue;
        res+=dfs(bx,by);
    }
    return res;

}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];


    cin>>sx>>sy;
    vis[sx][sy]=1;
    cout<<dfs(sx,sy);
    return 0;
}