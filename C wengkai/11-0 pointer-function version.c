/*
本题要求编写程序，计算两个二维平面向量的和向量。
输入格式：
输入在一行中按照“x1 y1 x2 y2”的格式给出两个二维平面向量V1=(x1, y1)和V2=(x2, y2)的分量。
输出格式：
在一行中按照“(x, y)”的格式输出和向量，坐标输出小数点后1位（注意不能输出-0.0）。
输入样例：
3.5 -2.7 -13.9 8.7
输出样例：
(-10.4, 6.0)
*/
#include <stdio.h>
#include <string.h>
struct vector{
    double x;
    double y;
};
void add(struct vector *v1,struct vector *v2,struct vector *ret){
    ret->x=v1->x+v2->x;
    ret->y=v1->y+v2->y;
}
int main(){
    struct vector v1,v2,ret;
    scanf("%lf %lf %lf %lf",
        &v1.x,&v1.y,&v2.x,&v2.y);
    add(&v1,&v2,&ret);
    if(ret.x>-0.05&&ret.x<0.05){
        ret.x=0.0;
    }
    if(ret.y>-0.05&&ret.y<0.05){
        ret.y=0.0;
    }       //确保不输出-0.0
    printf("(%.1f,%.1f)",ret.x,ret.y);
    return 0;
}