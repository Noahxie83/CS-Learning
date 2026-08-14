#include "node.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct _list{
    Node* head;
}List;
void add(List*pList,int number);
void print(List *pList);
int main(int argc,char const *argv[]){
    List list;
    int number;
    list.head=NULL;
    do {
        scanf("%d",&number);
        if (number!=-1){
            add(&list,number);
        }
    }while (number!=-1);//建立链表
    print(&list);//输出链表
    scanf("%d",&number);
    Node *p;
    int isFound=0;
    for (p=list.head;p;p=p->next){
        if (p->value==number){
            printf("Find it\n");
            isFound=1;
            break;
        }
    }
    if (!isFound){
        printf("Not Found\n");
    }//查找
    Node *q;
    for (q=NULL,p=list.head;p;q=p,p=p->next){
        if (p->value==number){
            if (q){
                q->next=p->next;
            }
            else {
                list.head=p->next;
            }
            free(p);
            break;
        }
    }//删除
    for (p=list.head;p;p=q){
        q=p->next;
        free(p);
    }//释放
    return 0;
}
void add(List*pList,int number){
    Node *p=(Node*)malloc(sizeof(Node));
    p->value=number;
    p->next=NULL;
    Node *last=pList->head;
    if (last){
        while (last->next){
        last=last->next;
        }
        last->next=p;
    }
    else {
        pList->head=p;
    }          
}//链表的添加
void print(List *pList){
        Node *p;
    for (p=pList->head;p;p=p->next){
        printf("%d\t",p->value);
    }
    printf("\n");
}//链表的输出
