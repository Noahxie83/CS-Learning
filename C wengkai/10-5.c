/*
题目说起来很简单,你会读到两个字符串,每个字符串占据一行,每个字符串的长度均小于10000字符,而且第一个字符串的长度小于第二个字符串的。
你的程序要找出第一个字符串在第二个字符串中出现的位置,输出这些位置,如果找不到,则输出-1。
注意,第一个字符的位置是0。
注意,第一个字符串在第二个字符串中的位置可能不止一处。
注意,字符串中可能含有空格。
注意,两个字符串的长度一定大于0。
输入格式:
两个字符串,一行一个。
输出格式:
第一个字符串在第二个字符串中出现的位置,按照从小到到的顺序排列,每个数字后面有一个空格。
如果在第二个字符串中找不到第一个字符串,则输出-1。
输入样例:
abba
ababbba abbabbabbabbaacc
输出样例:
8 11 14 17
*/
#include <stdio.h>
#include <string.h>
int main(){
    char a[10001],b[10001],*p=a,*q=b,s1,s2;
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
    q=b;
    int len1=strlen(a),cnt=0,len2=strlen(b),flag=0;
    for(q=b;q<=b+len2-len1;q++){
        char ch=*(q+len1);
        *(q+len1)='\0';
        if (strcmp(q,a)==0){
            printf("%d ",cnt);
            flag=1;
        }
        *(q+len1)=ch;
        cnt++;
    }
    if (flag==0){
        printf("-1");
    }
    return 0;
}