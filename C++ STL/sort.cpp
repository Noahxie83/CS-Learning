/*
sort()即排序算法,时间复杂度nlogn
(一)对基本类型的数组从小到大:
    sort(数组名+n1,数组名+n2)
    n1、n2为int类型,可以包含变量
    排序范围是[n1,n2)
(二)对类型为T的基本类型数组从大到小:
    sort(数组名+n1,数组名+n2,greater<T>());
(三)用自定义的排序规则,对任何类型T的数组排序
    sort(数组名+n1,数组名+n2,排序规则结构名);
    排序规则结构定义方式:
    struct 结构名{
    bool operator()(const T &a1,const T &a2)const{ 
        //若a1应该在a2前面,返回true
        //否则返回false
        }
    }
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct Rule1{//从大到小
    bool operator()(const int &a1,const int &a2)const{ 
        return a1>a2;
        }
    };
struct Rule2{//按个位数从小到大
    bool operator()(const int &a1,const int &a2)const{ 
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
    //sort(a+2,a+6);
    //sort(a,a+7,greater<int>());
    sort(a,a+sizeof(a)/sizeof(int),Rule1());
    Print(a,sizeof(a)/sizeof(int));
    sort(a,a+sizeof(a)/sizeof(int),Rule2());
    Print(a,sizeof(a)/sizeof(int));
}