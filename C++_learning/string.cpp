/*
用于数组类型字符串的cstring:
cin.getline(char buf[],int bufsize);
可以读入一行(行长度不超过bufsize-1)或bufsize-1个字符到buf里
可以自动添加'\0'回车换行符不会写入buf,但是会从输入流中去掉
cstring库函数中新增了
strcat、strupr/strlwr函数,分别起到拼接、转换大/小写的功能
用于string类型的字符串函数库string:
 getline(cin,s,'a')  cin指输入流,s指存入的string类型字符串,'a'指读到'a'停止,a可以在字符中任意替换 
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s.size()<<endl;
    cout<<s;
    return 0;
}
