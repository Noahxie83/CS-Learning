/*
STL中的平衡二叉树数据结构
有时需要在大量增加、删除数据的同时,还要进行大量数据的查找
希望增加数据、删除数据、查找数据都能在 log(n)复杂度完成
排序+二分查找显然不可以,因加入新数据就要重新排序
可以使用“平衡二叉树”数据结构存放数据,体现在STL中,就是以
下四种“排序容器”:multiset set multimap map
(一)multiset
multiset<T> st;
定义了一个multiset变量st,st里面可以存放T类型的数据,并且能自动排序。开始st为空
基础排序规则:表达式“a<b” 为true,则a排在b前面
可用st.insert添加元素,st.find查找元素,st.erase删除元素,复杂度都是log(n)
    multiset<T>::iterator p;
    p是迭代器,相当于指针,可用于指向multiset中的元素。访问multiset中的元素需要通过迭代器
    与指针不同:multiset上的迭代器可以++、--,用!=和==比较,不可比较大小,不可加减整数,不可相减
    st.begin()返回值类型为multiset<l>::iterator,
    是指向st中的头一个元素的迭代器
    st.end()返回值类型为multiset<T>::iterator,
    是指向st中的【最后一个元素后面】的迭代器
    对迭代器++,其就指向容器中下一个元素,--则令其指向上一个元素
与sort一样其还可以自定义排序规则
multiset<T,Rule<T>> st;
同理这里的【等于】的含义:<a必须在b前面>和<b必须在a前面>都不成立;【不是"=="】
e.g. 以个位数大小排序时可以通过find找133而找到数组中的13
*/
#include <iostream>
#include <cstring>
#include <set>//使用multiset和set需要此头文件
using namespace std;
int main (){
    multiset<int> st;
    int a[10]={1,14,12,13,7,13,21,19,8,8 };
    for(int i=0;i<10;i++){
        st.insert(a[i]);
    }//插入的是a[i]的复制品
    multiset<int>::iterator i;//迭代器,近似于指针
    for(i=st.begin();i!=st.end();i++){
        cout<<*i<<",";
    }
    cout<<endl;//1,7,8,8,12,13,13,14,19,21,
    i=st.find(22);//查找22,返回值为迭代器,找不到返回值为end()
    if (i==st.end()){
        cout<<"Not Found"<<endl;
    }
    st.insert(22);
    i=st.find(22);
    if (i==st.end()){//找到则返回指向找的元素的迭代器
        cout<<"Not Found"<<endl;
    }
    else {
        cout<<"Found:"<<*i<<endl;
    }//1,7,8,8,12,13,13,14,19,21,
    i=st.lower_bound(14);//返回最靠后的迭代器it,使得[begin(),it)中的元素都在13前面,复杂度log(n)
    cout<<*i<<endl;
    i=st.upper_bound(8);//返回最靠前的迭代器 it,使得[it,end())中的元素都在8后面,复杂度1og(n)
    cout<<*i<<endl;
    st.erase(i);//删除迭代器 i 指向的元素,即12
    for(i=st.begin();i!=st.end();i++){
        cout<<*i<<",";
    }
    return 0;
}