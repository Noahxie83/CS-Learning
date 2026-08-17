#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[100]="12345";
    char s2[100]="abcdefg";
    char s3[100]="ABCDE";
    strncat(s1,s2,3);
    cout<<"1)"<<s1<<endl;//1)12345abc
    strncpy(s1,s3,3);
    cout<<"2)"<<s1<<endl;//2)ABC45abc s3的前三个字符拷贝到s1
    strncpy(s2,s3,6);
    cout<<"3)"<<s2<<endl;//3)ABCDE s3的第六个字符为\0故此处到E就结束了
    cout<<"4)"<<strncmp(s1,s3,3)<<endl;//4)0  比较两者前3个字符
    char *p=strchr(s1,'B');//在s1中查找'B'第一次出现的位置,字串中找字符
    if (p){
        cout<<"5)"<<p-s1<<","<<*p<<endl;
    }
    else {
        cout<<"5)Not Found"<<endl;
    }
    p=strstr(s1,"45a");//strstr字串中找子串
    if (p){
        cout<<"6)"<<p-s1<<","<<p<<endl;
    }
    else {
        cout<<"6)Not Found"<<endl;
    }
    cout<<"strtok usage demo:"<<endl;
    char str[]="- This, a sample string, OK.";
    p=strtok(str," ,.-");//从str中逐个抽出被",.-"字符分隔的字串
    while (p){  //只要p不是NULL,就说明找到了一个子串
        cout<<p<<endl;
        p=strtok(NULL," ,.-");//后续调用,第一个参数必须是NULL
    }
    return 0;
}
