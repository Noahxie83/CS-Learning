/*
deuqe的定义:
在C++中，<deque> 是标准模板库（STL）的一部分，它提供了双端队列（double-ended queue）的实现。
双端队列是一种允许在两端进行插入和删除操作的线性数据结构。
<deque> 在C++中以模板类的形式存在，允许存储任意类型的数据。
<deque> 是一个动态数组，它提供了快速的「随机访问」能力，同时允许在两端进行高效的插入和删除操作。(注意与queue不允许随机访问元素的区别)
这使得 <deque> 成为处理需要频繁插入和删除元素的场景的理想选择。

deque的声明:
头文件:#include <deque>
deque<int> myDeque; // 创建一个整数类型的双端队列
                    // 接下来可以进行插入、删除等操作
                    deque()	默认构造函数，创建一个空的 deque 容器。

deque的初始化和基础操作:
deque()	                            默认构造函数，创建一个空的 deque 容器。
deque(size_type n)	                创建一个包含 n 个默认值元素的 deque 容器。
deque(size_type n, const T& value)	创建一个包含 n 个值为 value 的 deque 容器。
deque(initializer_list<T> il)	    使用初始化列表 il 构造 deque 容器。
operator=	                        赋值操作符，赋值给 deque 容器。

下面是成员函数:
assign()	                            用新值替换 deque 容器中的所有元素。
at(size_type pos)	                    返回 pos 位置的元素，并进行范围检查。
operator[](size_type pos)	            返回 pos 位置的元素，不进   行范围检查。
front()	                                返回第一个元素的引用。
back()	                                返回最后一个元素的引用。
begin()/end()                           返回指向第一个元素/末尾元素后一位置的迭代器。                                
rbegin()	                            返回指向最后一个元素的逆向迭代器。
rend()	                                返回指向第一个元素之前位置的逆向迭代器。
empty()	                                检查容器是否为空。
size()	                                返回容器中的元素个数。
max_size()	                            返回容器可容纳的最大元素个数。
clear()	                                清除容器中的所有元素。
insert(iterator pos, const T& value)	在 pos 位置插入 value 元素。
erase(iterator pos)	                    移除 pos 位置的元素。
push_back(const T& value)	            在容器末尾添加 value 元素。
pop_back()	                            移除容器末尾的元素。
push_front(const T& value)	            在容器前端添加 value 元素。(注意vector不行)
pop_front()	                            移除容器前端的元素。(注意vector不行)
resize(size_type count,const T& value)	调整容器大小为 count，多出部分用value(无就用默认值)填充。
swap(deque& other)	                    交换两个 deque 容器的内容。
get_allocator()	                        返回一个用于构造双端队列的分配器对象的副本。

vector和deque的区别
vector：连续内存，擅长尾部操作。
deque： 分段连续内存，擅长头尾两端操作。
*/
#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> myDeque;
    // 插入元素
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_front(5);
    // 访问元素
    cout << "Deque contains: ";
    for (int i=0;i<myDeque.size();i++) {
        cout<<myDeque[i]<<" ";
    }
    cout<<endl;
    // 删除元素
    myDeque.pop_back();
    myDeque.pop_front();
    // 再次访问元素
    cout<<"Deque after popping: ";
    for (int i=0;i<myDeque.size();i++) {
        cout<<myDeque[i]<<" ";
    }
    cout<<endl;

    //在不知道 deque 长度的时候，可以使用 deque.front() 与 deque.back() 来访问头尾元素：
    deque<int> d;
    // 向双端队列中添加元素
    d.push_back(10);
    d.push_back(20);
    d.push_front(5);
    // 访问前端元素
    cout<<"Front element: "<<d.front()<<endl;
    // 访问后端元素
    cout <<"Back element: "<<d.back()<<endl;
    // 修改前端元素
    d.front() = 15;
    // 修改后端元素
    d.back() = 25;
    // 再次访问元素
    cout<<"Modified front element: "<<d.front()<<endl;
    cout<<"Modified back element: "<<d.back()<<endl;
    return 0;
}