/*
set即集合(基于平衡二叉树)

set和multiset区别在于:
    set和multiset的区别在于容器里不能有重复元素
    a和b重复<=><a必须在b前面>和<b必须在a前面>都不成立;
    set插入元素可能不成功

set的定义:
C++ 标准库中的 <set> 是一个关联容器，它存储了一组唯一的元素，并按照一定的顺序进行排序。
<set> 提供了高效的元素查找、插入和删除操作。它是基于红黑树实现的，因此具有对数时间复杂度的查找、插入和删除性能。
<set> 容器中存储的元素类型必须满足以下条件：
    元素类型必须可以比较大小。
    元素类型必须可以被复制和赋值。

set的声明:
头文件#include <set>
set<类型,比较器> st;
类型：要储存的数据类型
比较器：比较大小使用的比较器，默认为 less<类型>，可自定义

以下是常用成员函数
insert(元素):          插入一个元素。
erase(元素):           删除一个元素。
find(元素):            查找一个元素。
size():                返回容器中元素的数量。
empty():               检查容器是否为空。
*/
#include <iostream>
#include <set>
using namespace std;
int main() {
    // 声明一个整型 set 容器
    set<int> mySet;
    // 插入元素
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    // 输出 set 中的元素
    cout<<"Set contains: ";
    for (int num:mySet){
        cout<<num<<" ";
    }
    cout<<endl;
    // 查找元素
    if (mySet.find(20)!=mySet.end()){
        cout<<"20 is in the set."<<endl;
    }else{
        cout<<"20 is not in the set."<<endl;
    }
    // 删除元素
    mySet.erase(20);
    // 再次输出 set 中的元素
    cout<<"After erasing 20, set contains: ";
    for (int num:mySet){
        cout<<num<<" ";
    }
    cout<<endl;
    // 检查 set 是否为空
    if (mySet.empty()){
        cout<<"The set is empty."<<endl;
    }else{
        cout<<"The set is not empty."<<endl;
    }
    // 输出 set 中元素的数量
    cout<<"The set contains "<<mySet.size()<<" elements."<<endl;
    return 0;
}