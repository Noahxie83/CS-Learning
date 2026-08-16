#include <iostream>
#include <cstdio>
using namespace std;//注意以上三行与C的不同
int main(){
    //printf("Hello,world!\n");  
    //int k='a';
    //printf("%d\n",k);
    //int n=254;//与C相同整型只保留最右边的一个字节(0~7位,即0~255)
    //char k=n;
    //printf("%c",k);
    /*char c;
    cin >>c;
    cout <<"  "<<c<<endl;
    cout <<" "<<c<<c<<c<<endl;
    cout <<c<<c<<c<<c<<c<<endl;*/
    int a;
    while ((a=cin.get())!=EOF){
        cout<<(char)a;
    }
    /*cin用于输入,cout用于输出,cout中的endl相当于换行
    使用cin.get()可以读入所有的字符包括' '、'\n'而不跳过
    但是cin和cout比scanf和printf速度慢,后者用于IO数据量大时
    */
    return 0;
}