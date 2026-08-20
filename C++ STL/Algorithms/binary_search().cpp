/*
STL提供在【排好序】的数组上进行二分查找的算法
用binary_search进行二分查找(用法一)
    在从小到大排好序的基本类型数组上进行二分查找
    binary_search(数组名+n1,数组名+n2,值)
    binary_search(arr.begin(),arr.end(),值)
    n1、n2都是int,查找范围为[n1,n2),在该区间内查找"等于""值"的元素
    【等于】的含义:a等于b<=>a<b和a>b都不成立;【不是"=="】
    找到返回true,没找到返回false
用binary_search进行二分查找(用法二)
    在用自定义排序规则排好序的、元素为任意的T类型的数组中进行二分查找
    binary_search(数组名+n1,数组名+n2,值,排序规则结构名())
    binary_search(arr.begin(),arr.end(),值,排序规则结构名())
    【注意】查找时的排序规则,必须和排序时的规则一致！
    【等于】的含义:a等于b<=><a必须在b前面>和<b必须在a前面>都不成立;
*/
#include <iostream>
#include <cstring>
#include <algorithm>
#define NUM 7
using namespace std;
struct Rule{//按个位数从小到大排
    bool operator()(const int &a1, const int &a2) const{
        return a1%10<a2%10;
    }
};
void Print(int a[],int size){
    for (int i=0;i<size;++i){
        cout<<a[i]<<",";
    }
    cout<<endl;
}
int main(){
    int a[]={12,45,3,98,21,7};
    sort(a,a+6);
    Print(a,6);
    cout<<"result1:"<<binary_search(a,a+6,12)<<endl;
    cout<<"result2:"<<binary_search(a,a+6,77)<<endl;
    sort(a,a+6,Rule());
    Print(a,6);
    cout<<"result3:"<<binary_search(a,a+6,7)<<endl;//没有按从小到大排
    cout<<"result4:"<<binary_search(a,a+6,8,Rule())<<endl;
    //【等于】的含义:a等于b<=><a必须在b前面>和<b必须在a前面>都不成立;98与8刚好满足这里的"等于"的要求
}