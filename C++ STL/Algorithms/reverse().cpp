/*
C++STL的 reverse 函数用来反转（颠倒）指定范围内的元素顺序。它包含在 <algorithm> 头文件中。
功能：将区间 [first,last) 内的元素原地反转。
迭代器要求：容器必须支持双向迭代器，例如 vector、string、list、普通数组等。不支持单向迭代器
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    reverse(v.begin(),v.end()); // 反转整个 vector
    for (int x:v) cout<<x<<" "; // 输出: 5 4 3 2 1
}