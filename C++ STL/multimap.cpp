/*
multimap容器里的元素,都是pair形式的
    multimap<T1,T2> mp;
则mp里的元素都是如下类型:
struct {
    T1 first;//关键字
    T2 second;//值
};
multimap中的元素按照first排序,并可以按first进行查找
缺省的排序规则是"a.first<b.first"为true,则a排在b前面
*/
#include <iostream>
#include <map>//使用multimap和map需要包含此头文件
#include <cstring>
using namespace std;
struct StudentInfo {
    int id;
    char name [20];
};
struct Student {
    int score;
    StudentInfo info;
};
typedef multimap<int,StudentInfo> MAP_STD;
// 此后MAP_STD等价于multimap<int, StudentInfo>
// typedef int*PINT;
// 则此后PINT等价于int*.即PINT p;等价于 int*p;
int main (){
    MAP_STD mp;
    Student st;
    char cmd[20];
    while(cin>>cmd){
        if(cmd[0]=='A'){
            cin>>st.info.name>>st.info.id>>st.score;
            mp.insert(make_pair(st.score,st.info));
        } //make_pair生成一个pair<int,StudentInfo>变量
          //其first等于st.score,second等于st.info
        else if(cmd[0]=='Q'){
            int score;
            cin>>score;
            MAP_STD::iterator p=mp.lower_bound(score);
            if (p!=mp.begin()){
                p--;
                score=p->first;//比要查询分数低的最高分
                MAP_STD::iterator maxp=p;
                int maxID=p->second.id;
                for(;p!=mp.begin()&&p->first==score;p--){//遍历所有成绩和score相等的学生
                    if (p->second.id>maxID){
                        maxp=p;
                        maxID=p->second.id;
                    }
                }
                if(p->first==score){//如果上面循环是因为p==mp.begin()而终止,则p指向的元素还要处理
                    if (p->second.id>maxID){
                        maxp=p;
                        maxID=p->second.id;
                    }
                }
                cout<<maxp->second.name<<" "<<maxp->second.id<<" "<<maxp->first<<endl;
            }
            //lower_bound的结果就是begin,说明没人分数比查询分数低
            else cout<<"Nobody"<<endl;
        }
    }
    return 0;
}