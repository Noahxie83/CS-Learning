/*
本题要求统计给定整数M和N区间内素数的个数并对它们求和。
输入格式：   输入在一行中给出2个正整数M和N（1<=M<=N<=500）。
输出格式：   在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
输入样例：   10 31
输出样例：    7 143                                                         
*/
#include <stdio.h>
int main(){
    int M,N,n=0,sum=0,i,j,sign=0;
    scanf("%d %d", &M, &N);
    i=M;
    while(i<=N){
        j=2;
        sign=1;
        while(j<=i/2){
            if(i%j==0){
                sign=0;
            }
            j++;
        }
        if(sign==1){
            n+=1;
            sum+=i;
        }
        i++;
    }
    printf("%d %d\n",n,sum);
return 0;
}