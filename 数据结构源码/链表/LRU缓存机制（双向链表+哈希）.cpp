//
// Created by 左政 on 2024/3/12.
//
#include "unordered_map"
using namespace std;
class DLinkedNode{                        //双向链表
public: int key,value;
    DLinkedNode* prev;
    DLinkedNode* next;
public:DLinkedNode():key(0),value(0),prev(nullptr),next(nullptr){};
    DLinkedNode(int _key,int _value):key(_key),value(_value),prev(nullptr),next(nullptr){};
};
  class LRUCache{
  private:
      unordered_map<int ,DLinkedNode*> cache;//哈希表
      DLinkedNode* head;
      DLinkedNode* tail;
      int size;int capacity;//最大缓存空间
  public:
      LRUCache(int _capacity):size(0),capacity(_capacity){
          head =new DLinkedNode();
          tail =new DLinkedNode();
          head->next=tail;
          tail->prev=head;
      }
      int get(int key) {
          if (!cache.count(key)) return -1;

          DLinkedNode *node = cache[key];
          moveToHead(node);
          return node->value;
      }
      void put(int key,int value){
          if(!cache.count(key)) {
              DLinkedNode *node = new DLinkedNode(key, value);
              cache[key] = node;
              addToHead(node);
              ++size;
              if (size > capacity) {
                  DLinkedNode *removed = removeTail();
                  cache.erase(removed->key);
                  delete removed;
                  --size;
              }
          }else{
              DLinkedNode *node=cache[key];
              node->value=value;
              moveToHead(node);
          }
      }
      void addToHead(DLinkedNode *node){
          node->prev= head;
          node->next=head->next;
          head->next->prev=node;
          head->next=node;
      }
      void removeNode(DLinkedNode* node){
          node->next->prev=node->prev;
          node->prev->next=node->next;
      }
      void moveToHead(DLinkedNode* node){
          removeNode(node);
          addToHead((node));
      }
      DLinkedNode* removeTail(){
          DLinkedNode* node=tail->prev;
          removeNode(node);
          return node;
      }


  };
