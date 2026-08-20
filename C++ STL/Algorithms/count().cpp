/*
count是C++标准模板库(STL)中的一个算法函数，用于统计某个指定值在容器或指定范围内出现的次数。它包含在 <algorithm> 头文件中。

语法:
count(first,last,value);
    first：指向范围起始位置的迭代器（包含该位置）。
    last：指向范围结束位置的迭代器（不包含该位置）。
    value：要查找和统计的目标值。
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> nums={1,2,3,2,4,2};
    // 统计数字 2 出现的次数
    int count_2=count(nums.begin(),nums.end(),2);
    cout<<"数字 2 出现的次数为: "<<count_2<<endl; // 输出 3
    return 0;
}
