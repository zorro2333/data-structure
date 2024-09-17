//
// Created by 左政 on 2023/11/15.
//
//
// Created by 左政 on 2023/10/12.
//


#include "iostream"
using namespace std;
const int S=101;//数组大小
int p[S][S];
int n;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
void dfs(int x1,int y1,int l){
    if(!(x1>0&&y1>0&&x1<=n&&y1<=n)) return;
    if(!p[x1+1][y1]&&!p[x1][y1+1]&&x1+1<=n&&y1+1<=n){
        p[x1][y1+1]=l;
        dfs(x1,y1+1,l+1);
    }
    for(int i=0;i<4;i++){
        int x=x1+dx[i];
        int y=y1+dy[i];
        if(x>0&&y>0&&x<=n&&y<=n){
            if(p[x][y]==0) {
                p[x][y] = l;
                dfs(x, y, l + 1);
                break;
            }
        }
    }
}
int main(){
    while(cin>>n){
        memset(p,0,sizeof(p));
        p[1][n]=1;
        dfs(1,n,2);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)cout<<p[i][j]<<" \n"[j==n];//打印输出
        }
        cout<<endl;//每组数据间空一行
    }
    return 0;
}





