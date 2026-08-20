/*
map即映射(基于平衡二叉树)

map和multimap区别在于:
    不能有关键字重复的元素
    可以使用[]，下标为关键字，返回值为first和关键字相同的元素的secind
    插入可能失败

map的定义:
在 C++ 中，<map> 是标准模板库（STL）的一部分，它提供了一种关联容器，用用于存储键值对（key-value pairs）。
map容器中的元素是按照键的顺序自动排序的，这使得它非常适合需要快速查找和有序数据的场景。

map的声明:
头文件:#include <map>
map<key_type,value_type> myMap;
    key_type是键的类型。
    value_type是值的类型。
插入元素：myMap[key] = value;
访问元素：value = myMap[key];
map的特点:
键值对：map 存储的是键值对，其中每个键都是唯一的。
排序：map 中的元素按照键的顺序自动排序，通常是升序。
唯一性：每个键在 map 中只能出现一次。
双向迭代器：map 提供了双向迭代器，可以向前和向后遍历元素。
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string,int>scores;
    // 插入
    scores["Alice"]=90;
    scores["Bob"]=85;
    scores.insert({"Charlie",92});
    // 遍历
    for (auto &p:scores){
        cout<<p.first<<" => "<<p.second<<endl;
    }
    // 查找
    auto it=scores.find("Bob");
    if (it!=scores.end()){
        cout<<"Bob's score: "<<it->second<<endl;
    }
    // 删除
    scores.erase("Alice");
    cout<<"Size: "<<scores.size()<<endl;
    return 0;
}
//PS:
/*
pair<T1,T2>等价于           e.g. pair<int,double>a;等价于
struct{                     struct{
T1 first;                          int first;
T2 second;                         double second;
};                          }a;
*/