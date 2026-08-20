/*
priority_queue的定义:
在 C++ 中，<priority_queue> 是标准模板库（STL）的一部分，用于实现优先队列。
优先队列是一种特殊的队列，它允许(只能)我们快速访问队列中具有最高（或最低）优先级的元素。
在 C++ 中，priority_queue 默认是一个最大堆(底层原理二叉堆)，这意味着队列的顶部元素总是具有最大的值。
priority_queue 是一个容器适配器，它提供了对底层容器的堆操作。它不提供迭代器，「也不支持随机访问」。

priority_queue的声明示例:
头文件 #include <queue>
priority_queue<int> pq;  // 声明一个整型优先队列
struct compare {         // 声明一个自定义类型的优先队列，需要提供比较函数
    bool operator()(int a,int b){
        return a > b;    // 这里定义了最小堆
    }
};
priority_queue<int,vector<int>,compare> pq_min;//类型：要储存的数据类型
               类型  容器        比较器           容器：储存数据的底层容器，默认为 vector<类型>，竞赛中保持默认即可
                                                 比较器：比较大小使用的比较器，默认为 less<类型>，可自定义

常用成员函数
empty():    检查队列是否为空。
size():     返回队列中的元素数量。
top():      返回队列顶部的元素（不删除它）。
push():     向队列添加一个元素。
pop():      移除队列顶部的元素。
*/
#include <iostream>
#include <queue>
using namespace std;
struct compare {
    bool operator()(int a,int b){
        return a>b; // 定义最小堆
    }
};
int main(){
    // 创建一个整型优先队列
    priority_queue<int> pq;
    // 向优先队列中添加元素
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    // 输出队列中的元素
    cout<<"队列中的元素："<<endl;
    while (!pq.empty()) {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    // 创建一个自定义类型的优先队列，使用最小堆
    priority_queue<int,vector<int>,compare> pq_min;
    // 向优先队列中添加元素
    pq_min.push(30);
    pq_min.push(10);
    pq_min.push(50);
    pq_min.push(20);
    // 输出队列中的元素
    cout<<"最小堆中的元素："<<endl;
    while (!pq_min.empty()) {
        cout<<pq_min.top()<<endl;
        pq_min.pop();
    }
    return 0;
}