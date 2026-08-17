/*
与C语言不同,在C++中,对于Void* 指针类型的指针p
sizeof(void)没有定义,*p、++p、p+=n、p+n等均无定义
*/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char szName[200]="";
    int a[20];
    memset(szName,'a',10);//void*的用途之一,memset(void* dest,int ch,int n)即把从dest开始的n个字节都设置成ch,返回dest,ch只有第一个字节起作用
    cout<<szName<<endl;//输出了10个a，memset可用于初始化字符串数组
    memset(a,'0',sizeof(a));
    cout<<a<<endl;//输出20个0,体现出void* 可以用于memset函数中让第一个参数可以是任何类型的指针
    return 0;
    int a1[10],a2[10];
    memcpy(a2,a1,10*sizeof(int));//memcpy(void* dest,void* src,int n)把地址scr开始的n个字节拷贝到地址dest,返回dest
}