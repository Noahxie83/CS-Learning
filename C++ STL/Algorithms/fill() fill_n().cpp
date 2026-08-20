/*
fill() 和 fill_n() 算法提供了一种为元素序列填入给定值的简单方式，fill() 会填充整个序列
fill_n() 则以给定的迭代器为起始位置，为指定个数的元素设置值。

语法:
fill(ForwardIterator first,ForwardIterator last,const T& val);
    first： 指向填充区域开始位置的迭代器（包含）。
    last：  指向填充区域结束位置的迭代器（不包含）。
    val：   用来填充的新值。
fill_n() 的参数分别是指向被修改序列的第一个元素的正向迭代器、被修改元素的个数以及要被设置的值。
*/
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main(){
    vector<int> vec(5); // 创建一个包含 5 个元素的 vector
    // 将整个 vector 填充为 9
    fill(vec.begin(),vec.end(),9);
    for(int x : vec){
        cout<<x<<" ";
    }
    return 0;
}
