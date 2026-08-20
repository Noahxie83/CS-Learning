/*
注意返回的是迭代器
用lower_bound二分查找下界(用法一)
    在对元素类型为T的从小到大排好序的基本类型的数组中进行查找
    T*lower_bound(数组名+n1,数组名+n2,值)
    T*lower_bound(arr.begin(),arr.end(),值)
    返回T*p;*p是查找区间里下标最小的,【大于等于】"值"的元素。
    如果找不到,p指向下标为n2的元素
用lower_bound二分查找下界(用法二)
    在用自定义排序规则排好序的、元素为任意的T类型的数组中进行查找
    T*lower_bound(数组名+n1,数组名+n2,值,排序规则结构名())
    T*lower_bound(arr.begin(),arr.end(),值,排序规则结构名())
    返回T*p;*p是查找区间里下标最小的,按自定义排序规则,【可以】排在"值"后面的元素
    如果找不到,p指向下标为n2的元素
用upper_bound二分查找下界(用法一)
    在对元素类型为T的从小到大排好序的基本类型的数组中进行查找
    T*upper_bound(数组名+n1,数组名+n2,值)
    T*upper_bound(arr.begin(),arr.end(),值)
    返回T*p;*p是查找区间里下标最小的,【大于】"值"的元素。
    如果找不到,p指向下标为n2的元素
用upper_bound二分查找下界(用法二)
    在用自定义排序规则排好序的、元素为任意的T类型的数组中进行查找
    T*lower_bound(数组名+n1,数组名+n2,值,排序规则结构名())
    T*upper_bound(arr.begin(),arr.end(),值,排序规则结构名())
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