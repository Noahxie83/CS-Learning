/*
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。
输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1空格，但一行中最后一个拼音数字后没有空格。
输入样例： 1234567890987654321123456789
输出样例： yi san wu
*/
#include <stdio.h>
int sum(int n);
void read(int n);
int weishu(int n);
int main(){
    int num;
    scanf("%d",&num);
    read(sum(num));
    return 0;
}
int sum(int n){
    int tmp=weishu(n),ret=0;
    while (tmp>0){
        int d=n/tmp;
        n%=tmp;
        tmp/=10;
        ret+=d;
    }
    return ret;
}
void read(int n){
    int tmp=weishu(n);
    while (tmp>0){
        int d=n/tmp;
        switch (d)
        {
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
        }
        if (tmp>1){
            printf(" ");
        }            
        n%=tmp;
        tmp/=10;
    }
}
int weishu(int n){
    int tmp=1,n_0=n;
    while (n_0>9){
        n_0/=10;
        tmp*=10;
    }return tmp;
}