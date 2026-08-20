/*
在C++标准库中,<utility>头文件包含了一些实用的工具类和函数,这些工具类和函数在编写高效、可读性强的代码时非常有用。
utility库的核心价值在于：
    提供基础的数据结构和工具函数
    简化常见编程任务的实现
    为其他标准库组件提供基础支持

实用工具函数还有swap、move、forward
swap 用于交换两个同类型对象的值。
move 用于将对象转换为右值引用，启用移动语义。
forward 用于实现完美转发，保持参数的值类别。
*/
#include <utility>
#include <iostream>
#include <vector>
using namespace std;
//swap示例
void demonstrateSwap(){
    int a=10,b=20;
    cout<<"交换前: a="<<a<<",b="<<b<<endl;
    swap(a,b);
    cout<<"交换后: a="<<a<<",b="<<b<<endl;
    // 也可以用于自定义类型（如果实现了移动语义）
    string str1="Hello",str2="World";
    swap(str1,str2);
    cout<<"字符串交换: "<<str1<<" "<<str2<<endl;
}
//move示例
void demonstrateMove(){
    vector<int> v1={1,2,3,4,5};
    vector<int> v2;
    cout<<"移动前 - v1大小: "<<v1.size()
            <<",v2大小: "<<v2.size()<<endl;
    // 使用移动语义转移资源所有权
    v2=move(v1);
    cout<<"移动后 - v1大小: "<<v1.size()
            <<",v2大小: "<<v2.size()<<endl;
    // v1 现在处于有效但未定义的状态
    // 通常不应该再使用 v1，除非重新赋值
}
//forward示例
// 普通函数 - 不能保持值类别
template<typename T>
void normalFunction(T arg){
    cout<<"普通函数参数"<<endl;
}
// 使用完美转发的函数
template<typename T>
void perfectForwardingFunction(T&& arg){
    // 保持参数原有的值类别（左值或右值）
    normalFunction(forward<T>(arg));
}
void demonstrateForward(){
    int x=10;
    // 传递左值
    perfectForwardingFunction(x);
    // 传递右值
    perfectForwardingFunction(20);
}

// 整数序列integer_sequence
// 使用整数序列打印序列中的每个值
template<typename T,T... Ints>
void print_sequence(integer_sequence<T,Ints...>){
    // 使用折叠表达式（C++17）打印所有值
    ((cout<<Ints<<" "),...);
    cout<<endl;
}
void demonstrateIntegerSequence(){
    // 创建整数序列
    auto seq=integer_sequence<int,1,2,3,4,5>();
    print_sequence(seq);
    // 使用 make_integer_sequence 生成序列
    auto seq2=make_integer_sequence<int,5>();
    print_sequence(seq2);  // 输出: 0 1 2 3 4
}