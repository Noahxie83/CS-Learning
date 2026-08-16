#include <iostream>
using namespace std;
int main(){
    //注意scanf的返回值为int类型,故当值为EOF时输入结束
    //而cin表达式的值在成功读入所有变量时为true,否则为flase
    int n,m;
    /*while ((scanf("%d%d",&n,&m))!=EOF){
        printf("%d\n",n+m);
    }*/
    while (cin>>n>>m){
        printf("%d\n",n+m);
    }
    //以上两种都可用于无结束标记的数据输入情况
    return 0;
}