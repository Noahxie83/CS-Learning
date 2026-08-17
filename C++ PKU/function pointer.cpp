/*
函数指针定义形式:类型名(*指针变量名)(参数类型1,参数类型2)
如 int (*pf)(int,char)
快速排序库函数
void qsort(void* base,int nelem,unsigned int width,int(*pfCompare)(const void*,const void*))
使用了函数指针使之可以对任意类型的数组进行排序
对数组排排序,需要知道：(4个参数一一对应)
1)数组起始地址 2)数组元素个数 3)每个元素大小 4)元素谁在前谁在后的规则
pfCompare由程序员自己编写,规则:
1)如果函数参数的前者应该排在后者前面，函数返回值为负整数
2)如果函数参数的前者与后者哪个排在前面都行，函数返回值为0
3)如果函数参数的前者应该排在后者后面，函数返回值为正整数
*/
#include <iostream>
using namespace std;
void PrintMin(int a,int b){
    if (a<b){
        printf("%d",a);
    }else {
        printf("%d",b);
    }
}
int MyCompare(const void* elem1,const void* elem2){
    unsigned int *p1,*p2;
    p1=(unsigned int*)elem1;//"*elem1"非法
    p2=(unsigned int*)elem2;//"*elem2"非法
    return (*p1%10)-(*p2%10);//返回规则:谁的个位数小谁排在前面,故结果为负整数
}
#define NUM 5
int main(){
    /*void(*pf)(int,int);
    int x=4,y=5;
    pf=PrintMin;//用pf调用所指向的函数
    pf(x,y);*/
    unsigned int an[NUM]={8,123,11,10,4};
    qsort(an,NUM,sizeof(unsigned int),MyCompare);
    for(int i=0;i<NUM;i++){
        cout<<an[i];
    }
    return 0;
}