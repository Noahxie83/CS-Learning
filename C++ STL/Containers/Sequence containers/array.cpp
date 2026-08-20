/*
<array> 头文件，提供了一种固定大小的数组容器，与C语言中的数组相比，具有更好的类型安全和内存管理特性。
array是C++标准库中的一个模板类，它定义在 <array> 头文件中。
array模板类提供了一个固定大小的数组，其大小在编译时确定，并且不允许动态改变。
基本用法:T为元素类型，N为数组大小(必须为非负整数)
#include <array>
array<T,N> array_name;
<array> 需要在编译时确定大小，不能动态改变。

特点:
 类型安全：array 强制类型检查，避免了 C 语言数组的类型不安全问题。
 固定大小：数组的大小在编译时确定，不能在运行时改变。
 内存连续：array 的元素在内存中是连续存储的，这使得它可以高效地访问元素。
 标准容器：array 提供了与 vector 类似的接口，如 size(),at(),front(),back() 等。
以下是常用成员函数
at(size_t pos)	        返回指定位置的元素，带边界检查
operator[]	            返回指定位置的元素，不带边界检查
front()	                返回数组的第一个元素
back()	                返回数组的最后一个元素
data()	                返回指向数组数据的指针
size()	                返回数组大小（固定不变）
fill(const T& value)	将数组所有元素设置为指定值
swap(array& other)	    交换两个数组的内容
begin() / end()	        返回数组的起始/结束迭代器
*/
#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,5> arr={10,20,30,40,50};
    cout<<"Array elements: ";
    for (int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"First element:"<<arr.front()<<endl;
    cout<<"Last element:"<<arr.back()<<endl;
    arr.fill(100);  // 将所有元素设置为100
    cout << "Filled array: ";
    for (const auto& elem:arr){
        cout<<elem<<" ";
    }
    cout<<endl;
    array<int,3> arr1={1,2,3};
    array<int,3> arr2={4,5,6};
    arr1.swap(arr2);
    cout<<"Array 1: ";
    for (const auto& elem:arr1) {
        cout<<elem<<" ";
    }
    cout<<endl;
    cout<<"Array 2: ";
    for (const auto& elem:arr2) {
        cout<<elem<<" ";
    }
    cout<<endl;
    return 0;
}