/*
unique是一个用来移除「相邻」重复元素的函数模板，定义在头文件 <algorithm> 中

核心功能与特性
相邻去重：它只移除相邻的重复元素，并每个重复组只保留第一个。
必须先排序：若想对整个容器或数组去重，必须先进行排序（sort），否则不相邻的重复元素无法被清除。
「“伪”删除」：它不会真正改变容器的物理容量或大小，而是把不重复的元素前移，将重复的元素移动到容器末尾。
返回值：返回一个指向去重后逻辑终点的迭代器（即新序列最后一个有效元素的下一个位置）。
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vec={1,2,2,3,3,3,1,2};
    // 1. 先排序
    sort(vec.begin(),vec.end());
    // 2. 使用 unique 去重
    auto it=unique(vec.begin(),vec.end());
    // 3. 真正删除末尾重复元素
    vec.erase(it,vec.end());
    // 输出结果：1 2 3
    for (int x:vec){
        cout<<x<<" ";
    }
    return 0;
}
