//
// Created by 左政 on 2023/10/18.
#include "cmath"
#include "vector"
#include "iostream"
using namespace std;
vector<vector<int> > ps;//存放幂集，集合的集合
void PSet(int n)//求1～n的幂集集合
{
    vector<vector<int> > ps1;//字幂集
    vector<vector<int> >::iterator it;//迭代器
    vector<int> s;//空集
    ps.push_back(s);
    for(int i=1;i<=n;++i){//循环添加1～n
        ps1=ps;//ps1添加上一步得到的幂集
        for(it=ps1.begin();it!=ps1.end();it++){//每一个集合加n
            (*it).push_back(i);
        }
        for(it=ps1.begin();it!=ps1.end();it++){//与前一步想加
            ps.push_back(*it);
        }
    }
}
void dispps(){//输出幂集
    vector<vector<int> >::iterator it;
    vector<int>::iterator sit;
    cout<<"1~n的幂集为："<<endl;
    for(it=ps.begin();it!=ps.end();++it) {
        cout<<"{";
     for(sit=(*it).begin();sit!=(*it).end();++sit){
         cout<<(*sit);
     }
     cout<<"}";
        cout<<endl;
    }

}
int main(){
    int n =10;
    cout<<"一共有"<<pow(2,n)<<"种结果"<<endl;
    PSet(n);
    dispps();
}
//回溯
class subset{
public:vector<int> t;
    vector<vector<int> > ans;
    void dfs(int cur,vector<int>& nums){
      if(cur==nums.size()){
          ans.push_back(t);
          return;
      }
      t.push_back(nums[cur]);
      dfs(cur+1,nums);
      t.pop_back();
      dfs(cur+1,nums);
    }
    vector<vector<int> > subsets(vector<int>& nums){
        dfs(0,nums);
        return ans;
    }
};






