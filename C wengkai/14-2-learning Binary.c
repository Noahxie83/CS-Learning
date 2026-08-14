#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    //num=0x55555555;
    unsigned mask=1u<<31;
    for (;mask;mask>>=1){
        printf("%d",num&mask?1:0);
    }
    printf("\n");
    return 0;
}