#include <iostream>
using namespace std;
/*
「类」
定义和使用类的基本过程:
    一、进行抽象
    二、声明类
    三、实现类
    四、使用类

「抽象」
抽象是对具体对象(问题)进行概括,提炼出这一类对象的公共性质并加以描述的过程
 -先注意问题的本质及描述,其次是实现过程或细节
 -数据抽象:描述某类对象(事物)共有的属性或状态
 -行为抽象:描述某类对象(事物)共有的行为特征或具有的功能
 抽象是相对的不是绝对的

「声明」
类是一种抽象数据类型,声明形式如下:
    class(关键字) ClassName{
        数据成员
        函数成员
    };
    关键字：用于声明类的类型
    数据成员：用于表达数据抽象
    函数成员：用于表达行为抽象
    「类成员的访问控制」
    类内：在类声明之内称为类内
    类外：在类声明之外称为类外
    通过设置成员的访问控制属性来实现对类成员的控制访问
      这些控制属性有：public、protected、private
    私有部分(private)和保护部分（protected）的数据成员和成员函数只能在类的范围内或被本类的成员函数访问，其区别在于继承后对派生类的影响不同，
    公有部分（public）的成员既可以被本类成员访问，也可以在类外被该类成员访问。
*/
class ClassName{
        public://公有成员
        protected://保护成员
        private://私有成员
        };
/*
「实现」
实现一个类,就是按照所设定的功能语义去实现类中的每一个成员函数
*/
//类内函数
class Clock1{
    private:int Hour,Minute,Second;
    public:
    void SetTime(int h,int m,int s){//类内函数
        Hour=h;Minute=m;Second=s;
    }
    void ShowTime(){
        cout<<"Current Time:"<<Hour<<":"<<Minute<<":"<<Second<<endl;
    }
};
//类外函数
class Clock2{
    private:int Hour,Minute,Second;
    public:
    void SetTime(int h,int m,int s);//类内函数
    void ShowTime();
};
void Clock2::SetTime(int h,int m,int s){
    Hour=h;Minute=m;Second=s;
}
void Clock2::ShowTime(){
        cout<<"Current Time:"<<Hour<<":"<<Minute<<":"<<Second<<endl;
}
//成员函数的定义与一般函数基本相同,只是多了作用域运算符“::”,表明了函数是该类下的函数,访问要收到一定的限制。
/*
「使用」
类是一种数据类型,类的变量称作类的实例,或对象
定义对象的方式:类名 对象名;e.g. Clock aclock;
对象的访问:
在类的作用域内，可以直接访问同类中的数据成员或调用同类中的成员函数
在类的作用域外，对象只能访问本类的公有数据或公有函数，需要用"."运算符
静态对象:
每当声明一个对象时，就会为该对象分配一块内存来存放所有成员，
即每个对象都拥有属于自己的所有成员，对象之间的成员不会互相干扰。
但是在某些情况下，我们希望同一类的不同对象共享某个成员，
对此，较好地解决办法是将其定义成类的静态成员。
使用关键字 static 修饰的成员叫做静态成员,可为数据也可为函数
*/
/*
C++ 中的结构体与类的唯一区别就是：
未明确说明的情况下，结构体的成员是公有的，类的成员是私有的。
但是，尽管结构体与类在 C++ 中基本相同，
习惯上还是在结构体定义中仅包含数据，涉及成员函数时尽量使用类的定义。
*/