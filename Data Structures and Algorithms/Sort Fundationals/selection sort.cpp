/*
如果有N个元素需要排序,那么首先从N个元素中找到最小的那个
(称为第0小的)放在第0个位子上(和原来的第0个位子上的元素交换位置),
然后再从剩下的N-1个元素中找到最小的放在第1个位子上,
然后再从剩下的N-2个元素中找到最小的放在第2个位子上 …… 直到所有的元素都就位。
//时间复杂度s^2
*/
#include <iostream>
using namespace std;
void SelectionSort(int a[],int size){//每次循环后将第i小的元素放好
    for (int i=0;i<size-1;i++){
        int tmpMin=i;//用来记录从第i个到第size-1个元素中,最小的那个元素的下标
        for (int j=i+1;j<size;j++){
            if (a[j]<a[tmpMin]){
                tmpMin=j;
            }
            //下面将第i小的元素放在第i个位子上,并将原来占着第i个位置的元素挪到后面
            int tmp=a[i];
            a[i]=a[tmpMin];
            a[tmpMin]=tmp;
        }
    }
}