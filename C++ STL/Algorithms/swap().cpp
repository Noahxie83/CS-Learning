/*
swap的功能:交换两个变量的值，譬如参数A和参数B，把A的值赋给B，再把B的值赋给A参数
虽然标准库为所有类型提供了通用的swap，但对于你自己的类，如果它有更高效的交换方式，你应该为其提供定制版本。
 swap(_Tp& __a,_Tp& __b)
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x=10;
    int y=20;
    cout<<"before swap: x:"<<x<<" y:"<<y<<endl;
    swap(x,y);
    cout<<"after swap: x:"<<x<<" y:"<<y<<endl;
}