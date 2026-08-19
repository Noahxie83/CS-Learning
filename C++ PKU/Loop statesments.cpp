#include <iostream>
using namespace std;
int main (){
   // for 循环执行
   for(int a=10;a<20;a++){
       cout<<"a 的值："<<a<<endl;
   }
   //以下是数组循环新表达方式示例
   int my_array[5]={1,2,3,4,5};
    // 每个数组元素乘于 2
    for (int &x:my_array){
        x*=2;
        cout<<x<<endl;  
    }
    // auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
    for (auto &x:my_array){
        x*=2;
        cout<<x<<endl;  
    }
   return 0;
   //上面for述句的第一部分定义被用来做范围迭代的变量，就像被声明在一般for循环的变量一样，其作用域仅只于循环的范围。
   //而在":"之后的第二区块，代表将被迭代的范围。
}