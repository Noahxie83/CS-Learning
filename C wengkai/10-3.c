/*
输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。
输入格式：
输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。
输出格式：
在一行中输出逆序后的字符串。
输入样例：
Hello World!
输出样例：
!dlroW olleH
*/
#include <stdio.h>
#include <string.h>
int main(){
    char a[81],*p=a,s1;
    while ((s1=getchar())!='\n'){
        *p=s1;
        p++;
    }
    *p='\0';
    for (p=a+strlen(a);p>=a;p--){
        putchar(*p);
    }
    return 0;
}