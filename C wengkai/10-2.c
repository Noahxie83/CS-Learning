/*
输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。
输入格式：
输入在2行中分别给出不超过80个字符长度的、以回车结束的2个非空字符串，对应S1和S2。
输出格式：
在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。
输入样例：
Tomcat is a male ccatat
cat
输出样例：
Tom is a male 
*/
#include <stdio.h>
#include <string.h>
int main( ){
    char S1[81],S2[81],tmp[81],*p=S1,*q=S2,s1,s2;
    int len;
    while ((s1=getchar())!='\n'){
        *p=s1;
        p++;
    }
    *p='\0';
    while ((s2=getchar())!='\n'){
        *q=s2;
        q++;
    }
    *q='\0';
    len=strlen(S2);
    p=S1;
    while (*p!='\0'){
        if(strlen(p)>=len){
            char ch=*(p+len);
            *(p+len)='\0';//确保后续strcmp的使用
            if (strcmp(p,S2)==0){
                *(p+len)=ch;
                strcpy(tmp,p+len);//把cat后面的部分向前复制
                strcpy(p,tmp);
                p=S1;//删除cat后重头再查找一次
            }
            else {
                *(p+len)=ch;
                p++;
            }
        }
        else {
            p++;
        }
    }
    printf("%s",S1);   
    return 0;
}