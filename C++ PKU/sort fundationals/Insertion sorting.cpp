/*
将整个数组a分为有序和无序的两个部分。前者在左边，后者在右边。
开始有序的部分只有a[0]，其余都属于无序的部分
每次取出无序部分的第一个(最左边)元素，把它加入有序部分。
假设插入到合适位置p,则原p位置及其后面的有序部分元素，都向右移动一个位子。
有序的部分即增加了一个元素。直到无序的部分没有元素
//时间复杂度n^2
*/
#include <iostream>
using namespace std;
void InsertionSort(int a[],int size){//每次循环后将第i小的元素放好
    for (int i=1;i<size;i++){//a[i]是最左的无序元素,每次循环将a[i]放到合适位置
        for (int j=0;j<size;j++){
            if (a[j]>a[i]){;//要把a[i]放到位置j，原下标j到i-1的元素都往后移一个位置
            int tmp=a[i];
            for (int k=i;k>j;k--){
                a[k]=a[k-1];
            }
            a[j]=tmp;
            break;
            }
        }
    }
}