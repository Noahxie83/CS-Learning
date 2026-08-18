/*
STL提供在【排好序】的数组上进行二分查找的算法
用binary_search进行二分查找(用法一)
    在从小到大排好序的基本类型数组上进行二分查找
    binary_search(数组名+n1,数组名+n2,值)
    n1、n2都是int,查找范围为[n1,n2),在该区间内查找"等于""值"的元素
    【等于】的含义:a等于b<=>a<b和a>b都不成立;【不是"=="】
    找到返回true,没找到返回false
用binary_search进行二分查找(用法二)
    在用自定义排序规则排好序的、元素为任意的T类型的数组中进行二分查找
    binary_search(数组名+n1,数组名+n2,值,排序规则结构名())
    【注意】查找时的排序规则,必须和排序时的规则一致！
    【等于】的含义:a等于b<=><a必须在b前面>和<b必须在a前面>都不成立;
用lower_bound二分查找下界(用法一)
    在对元素类型为T的从小到大排好序的基本类型的数组中进行查找
    T*lower_bound(数组名+n1,数组名+n2,值)
    返回T*p;*p是查找区间里下标最小的,【大于等于】"值"的元素。
    如果找不到,p指向下标为n2的元素
用lower_bound二分查找下界(用法二)
    在用自定义排序规则排好序的、元素为任意的T类型的数组中进行查找
    T*lower_bound(数组名+n1,数组名+n2,值,排序规则结构名())
    返回T*p;*p是查找区间里下标最小的,按自定义排序规则,【可以】排在"值"后面的元素
    如果找不到,p指向下标为n2的元素
用upper_bound二分查找下界(用法一)
    在对元素类型为T的从小到大排好序的基本类型的数组中进行查找
    T*upper_bound(数组名+n1,数组名+n2,值)
    返回T*p;*p是查找区间里下标最小的,【大于】"值"的元素。
    如果找不到,p指向下标为n2的元素
用upper_bound二分查找下界(用法二)
    在用自定义排序规则排好序的、元素为任意的T类型的数组中进行查找
    T*lower_bound(数组名+n1,数组名+n2,值,排序规则结构名())
    返回T*p;*p是查找区间里下标最小的,按自定义排序规则,【必须】排在"值"后面的元素
    如果找不到,p指向下标为n2的元素
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
    /*int a[]={12,45,3,98,21,7};
    sort(a,a+6);
    Print(a,6);
    cout<<"result1:"<<binary_search(a,a+6,12)<<endl;
    cout<<"result2:"<<binary_search(a,a+6,77)<<endl;
    sort(a,a+6,Rule());
    Print(a,6);
    cout<<"result3:"<<binary_search(a,a+6,7)<<endl;//没有按从小到大排
    cout<<"result4:"<<binary_search(a,a+6,8,Rule())<<endl;//【等于】的含义:a等于b<=><a必须在b前面>和<b必须在a前面>都不成立;98与8刚好满足这里的"等于"的要求*/
    int a[NUM]={12,5,3,5,98,21,7} ;
    sort(a,a+NUM) ;
    Print(a,NUM);//=>3,5,5,7,12,21,98,
    int *p=lower_bound(a,a+NUM,5);
    cout<<*p<<","<<p-a<<endl;//=> 5,1
    p=upper_bound(a,a+NUM,5);
    cout<<*p<<endl;//=>7
    cout<<*upper_bound(a,a+NUM,13)<<endl;//=>21
    sort(a,a+NUM,Rule());
    Print(a,NUM);//=>21,12,3,5,5,7,98,
    cout<<*lower_bound(a,a+NUM,16,Rule())<<endl;
    cout<<lower_bound(a,a+NUM,25,Rule())-a<<endl;
    cout<<upper_bound(a,a+NUM,18,Rule())-a<<endl;
    if(upper_bound(a,a+NUM,18,Rule())==a+NUM){
        cout<<"not found"<<endl;
    }
    cout<<*upper_bound(a,a+NUM,5,Rule())<<endl;
    cout<<*upper_bound(a,a+NUM,4,Rule())<<endl;
}