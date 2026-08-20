/*
forward_list的定义：
C++ 标准库中的 <forward_list> 是一种容器，它提供了一种单向链表的数据结构。
与双向链表（list）不同，forward_list只支持单向遍历。它适用于需要频繁进行前向遍历和插入、删除操作的场景。

forward_list的特点:
单向链表：forward_list 是单向链表，只能从前往后遍历，不能反向遍历。由于其单向链表的结构，插入和删除操作在已知位置的情况下非常高效（O(1) 复杂度）。
低内存开销：与list相比，forward_list只需要一个指向下一个节点的指针，节省了内存。
不支持随机访问：不支持通过索引访问元素，不能使用operator[]或at，只能通过迭代器进行访问。

forward_list的声明:
头文件#include <forward_list>
    forward_list<T> list;

以下是常用成员函数
push_front(const T& value)  列表的前端插入一个元素。
pop_front()                 移除列表前端的元素。
before_begin()              返回指向列表前端之前的迭代器。
begin()                     返回指向列表前端的迭代器。
end()                       返回指向列表末尾的迭代器。
*/
#include <iostream>
#include <forward_list>
using namespace std;
int main() {
    // 创建一个空的 forward_list
    forward_list<int> fl;
    // 在列表前端添加元素
    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(30);
    // 遍历 forward_list 并输出元素
    for (auto it=fl.begin();it!=fl.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;// 输出结果：30 20 10
    return 0;
}