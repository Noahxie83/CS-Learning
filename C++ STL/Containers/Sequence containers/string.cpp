/*
string的定义：
在C++中，字符串是由字符组成的序列。<string> 头文件提供了string类，它是对C风格字符串的封装，提供了更安全、更易用的字符串操作功能。

string的声明：
头文件 #include <string>
初始化：
       string str;
       string str="Hello,World!";
       string str1="Hello,";
       string str2="World!";
       string result str1+str2;「可以使用+实现两个string的连接」

作用	                  用法	
修改、查询指定下标字符  	[]	
是否相同	               ==	
字符串连接	                +	
尾接字符串	               +=	                   尾接字符串一定要用 +=
取子串	            .substr(起始下标,子串长度)	string sub=s.substr(2,10);
查找字符串	         .find(字符串,起始下标)	    int pos=s.find("awa");

成员函数：
size()	            返回字符串的长度（字符数）。	            
length()	        与 size() 相同，返回字符串的长度。	       
empty()	            判断字符串是否为空。	                   
operator[]	        访问字符串中指定位置的字符。	            
at()	            访问字符串中指定位置的字符（带边界检查）。	  
substr()	        返回从指定位置开始的子字符串。	
find()	            查找子字符串在字符串中的位置。	
rfind()	            从字符串末尾开始查找子字符串的位置。	
replace()	        替换字符串中的部分内容。	
append()	        在字符串末尾添加内容。	
insert()	        在指定位置插入内容。	
erase()	            删除指定位置的字符或子字符串。	
clear()	            清空字符串。	
c_str()	            返回 C 风格的字符串（以 null 结尾）。	
data()	            返回指向字符数据的指针（C++11 及之后的版本）。	
compare()	        比较两个字符串。	
find_first_of()	    查找第一个匹配任意字符的位置。	
find_last_of()	    查找最后一个匹配任意字符的位置。	
find_first_not_of()	查找第一个不匹配任意字符的位置。	
find_last_not_of()	查找最后一个不匹配任意字符的位置。	
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str="Hello,World!";
    // size()
    cout<<"Length: "<<str.size()<<endl;
    // empty()
    cout<<"Is empty? "<<(str.empty()?"Yes":"No")<<endl;
    // operator[]
    cout<<"First character: "<<str[0]<<endl;
    // at()
    cout<<"Character at position 7: "<<str.at(7)<<endl;
    // substr()
    string sub=str.substr(7,5);
    cout<<"Substring from position 7 with length 5: "<<sub<<endl;
    // find()
    size_t pos=str.find("World");
    cout<<"Position of 'World': "<<pos<<endl;
    // replace()
    str.replace(pos,5,"C++");
    cout<<"Modified string: "<<str<<endl;
    // append()
    str.append(" How are you?");
    cout<<"Appended string: "<<str<<endl;
    // insert()
    str.insert(7," Beautiful");
    cout<<"String after insert: "<<str<<endl;
    // erase()
    str.erase(7,10);
    cout<<"String after erase: "<<str<<endl;
    // clear()
    str.clear();
    cout<<"String after clear: "<<(str.empty()?"Empty":"Not empty")<< std::endl;
    // c_str()
    str="Hello,C++!";
    const char* cstr=str.c_str();
    cout<<"C-style string: "<<cstr<<endl;
    // compare()
    int cmp=str.compare("Hello,C++!");
    cout<<"Comparison result: "<<cmp<<endl;
    // find_first_of()
    size_t pos_first_vowel=str.find_first_of("aeiou");
    cout<<"First vowel at position: "<<pos_first_vowel<<endl;
    // find_last_of()
    size_t pos_last_vowel=str.find_last_of("aeiou");
    cout<<"Last vowel at position: "<<pos_last_vowel<<endl;
    // find_first_not_of()
    size_t pos_first_non_vowel=str.find_first_not_of("aeiou");
    cout<<"First non-vowel at position: "<<pos_first_non_vowel<<endl;
    // find_last_not_of()
    size_t pos_last_non_vowel=str.find_last_not_of("aeiou");
    cout<<"Last non-vowel at position: "<<pos_last_non_vowel<<endl;
    return 0;
}