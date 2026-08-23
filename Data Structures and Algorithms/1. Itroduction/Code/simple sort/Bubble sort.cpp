/*
将整个数组a分为有序的部分和无序的两个部分。前者在右,后者在左边。
开始,整个数组都是无序的。有序的部分没有元素。
每次要使得无序部分最大的元素移动到有序部分第一个元素的左边。
移动的方法是:依次比较相邻的两个元素,如果前面的比后面的大,就交换他们的位置。
这样,大的元素就像水里气泡一样不断往上浮。移动结束有序部分增加了一个元素。
直到无序的部分没有元素
时间复杂度n^2
*/
#include <iostream>
using namespace std;
void BubbleSort(int A[] ,int n){
    for (bool sorted=false;sorted=!sorted;n--){//利用表达式副作用控制流程,有交换时下一次进入循环时sorted是true,反转后是flase停止循环
        for (int i=1;i<n;i++){
            if (A[i-1]>A[i]){
                swap(A[i-1],A[i]);
                sorted=false;
            }
        }
    }
}