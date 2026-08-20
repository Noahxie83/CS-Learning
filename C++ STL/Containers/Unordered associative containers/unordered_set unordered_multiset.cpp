/*
unordered_set的定义:
在C++中,<unordered_set> 是标准模板库(STL)的一部分,提供了一种基于哈希表的容器,用于存储唯一的元素集合。
与 set 不同,unordered_set 不保证元素的排序,但通常提供更快的查找、插入和删除操作。

unordered_set的声明:
头文件:#include <unordered_set>
    unordered_set<Key,Hash =hash<Key>,Pred=equal_to<Key>,Alloc=allocator<Key>>
    Key   是存储在unordered_set中的元素类型。
    Hash  是一个函数或函数对象,用于生成元素的哈希值,默认为 hash<Key>。
    Pred  是一个二元谓词,用于比较两个元素是否相等,  默认为 equal_to<Key>。
    Alloc 是分配器类型,用于管理内存分配,           默认为 allocator<Key>。

unordered_multiset:
unordered_multiset除了能存储相同值的元素外,它和 unordered_set 容器完全相同。
实现unordered_multiset容器的模板类并没有定义在以该容器名命名的文件中,而是和 unordered_set容器共用同一个<unordered_set>头文件
*/
#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    // 创建一个整数类型的 unordered_set
    unordered_set<int> uset;
    // 插入元素
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    // 打印 unordered_set 中的元素
    cout<<"Elements in uset: ";
    for (int elem:uset){
        cout<<elem<<" ";
    }
    cout<<endl;
    // 查找元素
    auto it = uset.find(20);
    if (it != uset.end()){
        cout<<"Element 20 found in uset."<<endl;
    } else{
        cout<<"Element 20 not found in uset."<<endl;
    }
    // 删除元素
    uset.erase(20);
    cout<<"After erasing 20, elements in uset: ";
    for (int elem:uset){
        cout<<elem<<" ";
    }
    cout<<endl;
    // 检查大小和是否为空
    cout<<"Size of uset: "<<uset.size()<<endl;
    cout<<"Is uset empty? "<<(uset.empty()?"Yes":"No")<<endl;
    // 清空 unordered_set
    uset.clear();
    cout<<"After clearing, is uset empty? "<<(uset.empty()?"Yes":"No")<<endl;
    return 0;
}
/*
集合三要素	        解释	                    set	        multiset	    unordered_set       unordered_multiset
确定性	    一个元素要么在集合中,要么不在	       ✔	        ✔	            ✔                      ✔
互异性	    一个元素仅可以在集合中出现一次	       ✔	        ❌(任意次)	    ✔                      ❌(任意次)
无序性	    集合中的元素是没有顺序的	          ❌(从小到大)  ❌(从小到大)	   ✔                       ✔
*/