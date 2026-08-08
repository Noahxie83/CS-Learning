/*
水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。
例如：153 = 1^3 + 5^3+ 3^3。本题要求编写程序,计算所有N位水仙花数。
输入格式：    输入在一行中给出一个正整数N（3<=N<=7）。
输出格式：    按递增顺序输出所有N位水仙花数，每个数字占一行。
输入样例：    3
输出样例：
153
370
371
407                                                                     
*/
#include <stdio.h>
int main(){
    int N;
    scanf("%d" ,&N);
    int i=0,p0=1,p1=1,p2=1,p3=1,p4=1;
    int p5=1,p6=1,p7=1,p8=1,p9=1;
    while(i<N){
        p0*=0;
        p1*=1;
        p2*=2;
        p3*=3;
        p4*=4;
        p5*=5;
        p6*=6;
        p7*=7;
        p8*=8;
        p9*=9;
        i++;
    }
    int start=1;
    while(i-1>0){
        start*=10;
        i--;
    }
    int end=start*10-1,x_0=start,x;
    while(x_0<=end){
        int sum=0,x=x_0;
        while(x>0){
        int dig=x%10;
        if(dig==0) sum+=p0;
            else if(dig==1) sum+=p1;
            else if(dig==2) sum+=p2;
            else if(dig==3) sum+=p3;
            else if(dig==4) sum+=p4;
            else if(dig==5) sum+=p5;
            else if(dig==6) sum+=p6;
            else if(dig==7) sum+=p7;
            else if(dig==8) sum+=p8;
            else if(dig==9) sum+=p9;
            x/=10;
        }
        if (x_0==sum){
            printf("%d\n",x_0);
        }
        x_0++;
    }
    return 0;
}