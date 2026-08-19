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
    当创建一个类时，不需要重新编写新的数据成员和成员函数，只需指定新建的类继承了一个已有的类的成员即可。
    这个已有的类称为基类，新建的类称为派生类。
    类内：在类声明之内称为类内
    类外：在类声明之外称为类外
    一个类可以派生自多个类，这意味着，它可以从多个基类继承数据和函数。
    定义一个派生类，我们使用一个类派生列表来指定基类。类派生列表以一个或多个基类命名，形式如下：
        class derived-class: access-specifier base-class
        其中，访问修饰符 access-specifier 是 public、protected 或 private 其中的一个，
        base-class 是之前定义过的某个类的名称。如果未使用访问修饰符 access-specifier，则默认为 private。
    「继承类型」
        当一个类派生自基类，该基类可以被继承为 public、protected 或 private 几种类型。继承类型是通过上面讲解的访问修饰符 access-specifier 来指定的。
        我们几乎不使用 protected 或 private 继承，通常使用 public 继承。当使用不同类型的继承时，遵循以下几个规则：
        公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，
                          基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
        保护继承（protected）： 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
        私有继承（private）：当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。
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
/*
双冒号(::)用法
（1）表示“域操作符”
    例：声明了一个类A,类A里声明了一个成员函数void f(),但没有在类的声明里给出f的定义,那么在类外定义f时,就要写成void A::f(),表示这个f()函数是类A的成员函数。
（2）直接用在全局函数前，表示是全局函数
    例：在VC里,你可以在调用API函数里,在API函数名前加::
（3）表示引用成员函数及变量,作用域成员运算符
    例：System::Math::Sqrt() 相当于System.Math.Sqrt()
*/
/*
「构造函数」
构造函数是用来给对象初始化的函数。理论上来说构造函数体内可以做任何事情，
但一般只专用做成员变量的初始化。构造函数在对象创建之时自动调用，
任何对构造函数的显示调用都是不被允许的。构造函数没有返回类型，
函数名固定为类名，但是允许按照重载规则给出不同的参数类型的构造函数。
在没有给任何构造函数时，系统会自动给出缺省构造函数，里面什么也不做。
在一些 OOP（面向对象）语言比如 Java 当中，编译器会自动给类里的成员变量按照统一的规则进行初始化；
然而 C++ 语言当中，如果没有定义构造函数，它是不会自动给类里面的成员变量初始化的。
这是 C++ 为了提高编译效率而考量的。因此如果在对类里的成员进行操作之前没有进行初始化，
那么成员变量里的值将会是不确定。除了在构造函数的函数体内进行初始化之外，C++ 还允许在构造函数头部列一个参数表来进行初始化。
「析构函数」
析构函数常常用来做对象消亡之前的扫尾工作，常常是用来对 new 出来的空间做 delete。
析构函数没有返回类型，函数名是 加上类名，不带参数，不能重载。析构函数在对象消亡之时自动调用，
在任何地方显示调用析构函数也是不对的。
*/
class Clock3{
    private:int Hour,Minute,Second;
    public:Clock3(int h=12,int m=0,int s=0);
           ~Clock3();
           //...
};
Clock3::~Clock3(){
    cout<<"Clock obj destroyed!"<<endl;
}

#include <iostream>
using namespace std;
// 基类
class Shape{
    public:
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
    protected:
    int width;
    int height;
};
// 派生类
class Rectangle: public Shape{
    public:
    int getArea(){ 
        return (width * height); 
    }
};
int main(void){
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);
    // 输出对象的面积
    cout<<"Total area: "<<Rect.getArea()<<endl;
    return 0;
}