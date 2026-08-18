/*
set和multiset的区别在于容器里不能有重复元素
a和b重复<=><a必须在b前面>和<b必须在a前面>都不成立;
set插入元素可能不成功
*/
#include <iostream>
#include <cstring>
#include <set>
using namespace std;
int main (){
    set<int> st;
    int a[10]={1,2,3,8,7,7,5,6,8,12};
    for(int i=0;i<10;i++){
        st.insert(a[i]);
    }
    cout<<st.size()<<endl;//输出:8
    set<int>::iterator i;
    for(i=st.begin();i!=st.end();i++){
        cout<<*i<<","; 
    }//输出: 1,2,3,5,6,7,8,12,
    cout<<endl;
    pair<set<int>::iterator,bool> result=st.insert(2);
    if(!result.second){//条件成立说明插入不成功
        cout<<*result.first<<" already exists."<< endl;
    }
    else{
        cout<<*result.first<<" inserted."<< endl;
    }
    return 0;
}
/*
pair<T1,T2>等价于           e.g. pair<int,double>a;等价于
struct{                     struct{
T1 first;                          int first;
T2 second;                         double second;
};                          }a;
*/