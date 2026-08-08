/*
模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，4种运算符的优先级相同，按从左到右的顺序计算。
输入格式：
输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。
输出格式：
在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。
输入样例：   1+2*10-10/2=
*/
#include <stdio.h>
int main(){
char symbol ='0';
int num=0;
scanf("%d",&num);
int res=num;
while(symbol!='='){
    scanf(" %c",&symbol);
    if (symbol=='='){
        printf("%d",res);
        break;
    }
    scanf("%d",&num);
    if (symbol=='+'){
        res+=num;
    }
    else if (symbol=='-'){
        res-=num;
    }
    else if (symbol=='*'){
        res*=num;
    }
    else if (symbol=='/'){
        if (num==0){
            printf("ERROR\n");
            return 0;
        }
        else {
            res/=num;
        }
    }
    else {
        printf("ERROR\n");
        return 0;
    }
}
	return 0;
}