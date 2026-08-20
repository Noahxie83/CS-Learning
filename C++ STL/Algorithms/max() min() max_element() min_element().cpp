/*
max/min是一个定义在 <algorithm> 头文件中的函数模板，用于返回两个或多个值中的较大/小者。
两者类似，以下以max为例

常用形式：
比较两个值：max(a,b)
比较多个值（初始化列表）：max({a,b,c,d})
自定义比较规则：max(a,b,comp)

max_element/max_element 是用来在指定范围内查找最大/小元素的标准库算法函数
max_element(v.begin(),v.end()) 
返回值：返回一个迭代器（指向最大元素），如果想获取具体数值，需要使用解引用操作符 *。
查找区间：左闭右开区间 [first,last)
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x=10,y=20;
    cout<<max(x,y)<<endl;         // 输出 20
    cout<<max({2,9,2,5})<<endl; // 输出 9 (多值比较)
	int n[]={1,4,22,3,8,5};
	int len=sizeof(n)/sizeof(int);
	cout<<*max_element(n,n+len)<<endl;
	cout<<*min_element(n,n+len)<<endl;
    return 0;
}
