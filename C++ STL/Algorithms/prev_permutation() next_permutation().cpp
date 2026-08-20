/*
next_permutation 和 prev_permutation 是两个常用的排列生成函数。
next_permutation:生成下一个字典序排列。
prev_permutation:生成上一个字典序排列。

语法
prev_permutation(Iterator first,Iterator last,Compare comp)
first 和 last:双向迭代器，指定序列范围 [first,last)。
comp:自定义的比较函数或仿函数。

返回值:
如果成功生成目标排列，返回 true，并修改序列。
如果当前排列已经是极值（最大或最小），则返回 false，并将序列改为相反的极值。
next_permutation:改为最小排列（升序）。
prev_permutation:改为最大排列（降序）。

原理
next_permutation生成下一个字典序排列的步骤：
从后往前找第一个满足 a[i] < a[i+1] 的位置 i。
从后往前找第一个大于 a[i] 的元素 a[j]。
交换 a[i] 与 a[j]。
反转 [i+1, end) 的子序列。

prev_permutation生成上一个字典序排列的步骤与 next_permutation 类 似，只是比较条件相反：
从后往前找第一个满足 a[i] > a[i+1] 的位置 i。
从后往前找第一个小于 a[i] 的元素 a[j]。
交换 a[i] 与 a[j]。
反转 [i+1, end) 的子序列。
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[]={1,2,3};
    int n=3;
    cout<<"使用 next_permutation:"<<endl;
    do {
        for (int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    } while (next_permutation(a,a+n));
    int b[]={3,2,1};
    cout<<"使用 prev_permutation:"<<endl;
    do {
        for (int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
        cout<<endl;
    } while (prev_permutation(b,b+n));
    return 0;
}