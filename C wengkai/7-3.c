/*
令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。
输入格式：
输入在一行中给出M和N，其间以空格分隔。
输出格式：
输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。
输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/
#include <stdio.h>
int isPrime(int n);
int main(){
    int M,N,count=0,i,j=1,k;
    int a[10000];
    scanf("%d %d",&M,&N);
    a[0]=2;
    for (i=3;j<N;i+=2){
        if (isPrime(i)){
            a[j++]=i;
        }
    }
    for (k=M-1;k<N;k++){
        printf("%d",a[k]);
            count++;
        if (count%10==0||k==N-1){
            printf("\n");
        }
        else {
            printf(" ");
        }
    }
    return 0;
}
int isPrime(int n){
    int i;
    for (i=2;i*i<=n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}