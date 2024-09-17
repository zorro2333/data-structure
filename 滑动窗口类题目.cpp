//
// Created by 左政 on 2024/3/7.
//
#include "iostream"
#include "set"
#include "unordered_set"
using namespace std;
class solution{
public:int lengthOfLongestSubstring(string s){
if(s.size()==0) return 0;
unordered_set<char> lookup;
int left=0;int ans=0;
for(int i=0;i<s.size();++i){
    while(lookup.find(s[i])!=lookup.end()){
        lookup.erase(s[left]);
        ++left;
    }
    ans=max(ans,i-left+1);
    lookup.emplace(s[i]);
}return ans;

}
};