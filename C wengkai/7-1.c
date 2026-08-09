/*
让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。
例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。
输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。
输出格式：每个测试用例的输出占一行，用规定的格式输出n。
输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
*/
#include <stdio.h>

int weishu(int n);
void read(int n);
int main(){
    int num;
    scanf("%d",&num);
    read(num);
    return 0;
}
int weishu(int n){
    int tmp=1,n_0=n;
    while (n_0>9){
        n_0/=10;
        tmp*=10;
    }return tmp;
}
void read(int n){
    int tmp=weishu(n),i;
    while (tmp>0){
        int d=n/tmp;
        switch (tmp)
        {
        case 100:
        for (i=0;i<d;i++)
        {
            printf("B");
        }break;
        case 10:        
        for (i=0;i<d;i++)
        {
            printf("S");
        }break;
    }
        if (tmp<10){
            for (i=0;i<d;i++)
            {
            printf("%d",i+1);
            }
        }            
        n%=tmp;
        tmp/=10;
    }
}