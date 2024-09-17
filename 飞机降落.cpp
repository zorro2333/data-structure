//
// Created by 左政 on 2023/11/9.
//
#include "iostream"

using namespace std;
struct  node{
    int a,b,c;
}q[11];
int t,n;
bool book[11];//标记第i个飞机是否能起飞
bool dfs(int num,int last){
    if(num==n) return 1;
    for(int i=0;i<n;++i){
        if(!book[i]&&q[i].a+q[i].b>=last){
            book[i]=1;

            if(dfs(num+1,max(last,q[i].a)+q[i].c))
                return 1;
            book[i]=0;
        }
    }return 0;
}
int main(){
    cin>>t;
    while(t--){
        memset(book,0,sizeof(book));
        cin>>n;
        for(int i=0;i<n;++i){
            int a,b,c;
            cin>>a>>b>>c;
            q[i].a=a;q[i].b=b;q[i].c=c;
        }
        if(dfs(0,0))puts("YES");
        else puts("NO");

    }
    return 0;
}