/*
find 是标准模板库（STL）中一个基础且常用的查找算法,定义在头文件 <algorithm> 中

语法：
InputIterator find (InputIterator first,InputIterator last,const T& val);
    其中,first 和 last 为输入迭代器,[first,last)用于指定该函数的查找范围；val 为要查找的目标元素。
    该函数会返回一个输入迭代器,当 find()函数查找成功时,其指向的是在[first,last)区域内查找到的第一个目标元素；
    如果查找失败,则该迭代器的指向和 last 相同。
注意:
find()函数的底层实现,其实就是用"=="运算符将 val 和[first,last)区域内的元素逐个进行比对。这也就意味着,[first,last)区域内的元素必须支持"=="运算符。
find()函数除了可以作用于序列式容器，还可以作用于普通数组。
*/
#include <iostream>     
#include <algorithm>
#include <cstring>    
#include <vector>       
using namespace std;
int main(){
    //find() 函数作用于普通数组
    char stl[] ="hello c++";
    //调用 find() 查找第一个字符 'c'
    char *p=find(stl,stl+strlen(stl),'c');
    //判断是否查找成功
    if (p!=stl+strlen(stl)){
        cout<<p<<endl;
    }
    //find() 函数作用于容器
    vector<int> myvector{10,20,30,40,50};
    vector<int>::iterator it;
    it=find(myvector.begin(),myvector.end(),30);
    if (it!=myvector.end())
        cout<<"查找成功："<<*it;
    else
        cout<<"查找失败";
    return 0;
}