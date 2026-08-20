/*
queue的定义:
C++ 标准库中的 <queue> 头文件提供了队列（Queue）数据结构的实现。
队列是一种先进先出（FIFO, First In First Out）的数据结构，它允许在一端添加元素（称为队尾），并在另一端移除元素（称为队首）。
queue的特点：
「元素只能从队尾添加」。
「元素只能从队首移除」。

queue的声明:
头文件 #include <queue>
       queue<T> q;

常用成员函数
empty():    检查队列是否为空。
size():     返回队列中的元素数量。
front():    返回队首元素的引用。
back():     返回队尾元素的引用。
push():     在队尾添加一个元素。
pop():      移除队首元素。
*/
#include <iostream>
#include <queue>
using namespace std;
int main() {
    // 创建一个整数队列
    queue<int> q;
    // 向队列中添加元素
    q.push(10);
    q.push(20);
    q.push(30);
    // 打印队列中的元素数量
    cout<<"队列中的元素数量: "<<q.size()<<endl;
    // 打印队首元素
    cout<<"队首元素: "<<q.front()<<endl;
    // 打印队尾元素
    cout<<"队尾元素: "<<q.back()<<endl;
    // 移除队首元素
    q.pop();
    cout<<"移除队首元素后，队首元素: "<<q.front()<<endl;
    // 再次打印队列中的元素数量
    cout<<"队列中的元素数量: "<<q.size()<<endl;
    return 0;
}