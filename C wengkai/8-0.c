/*
本题要求从输入的N个整数中查找给定的X。如果找到，输出X的位置（从0开始数）；如果没有找到，输出“Not Found”。
输入格式：
输入在第1行中给出2个正整数N（<=20）和X，第2行给出N个整数。数字均不超过长整型，其间以空格分隔。
输出格式：
在一行中输出X的位置，或者“Not Found”。
输入样例1：
5 7
3 5 7 1 9
输出样例1：
2
输入样例2：
5 7
3 5 8 1 9
输出样例2：
Not Found
*/
#include <stdio.h>
int main(){
    int N,x,i,j;
    int a[20];
    scanf("%d %d",&N,&x);
    for (i=0;i<N;i++){
        scanf("%d",&j);
        a[i]=j;
    if (j==x){
        printf("%d",i);
        break;
    }
    if (i==N-1){
        printf("Not Found");
    }
    }
    return 0;
}