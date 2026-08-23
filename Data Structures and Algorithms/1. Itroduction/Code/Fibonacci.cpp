#include <iostream>
#include <vector>
using namespace std;
vector<int> saved;
int fib1(int n){//递归
    if(n==0)return 0;
    if(n==1)return 1;
    return fib1(n-1)+fib1(n-2);
}
int fib2(int n){//记忆化搜索
    if(n==0)return 0;
    if(n==1)return 1;
    if(saved[n]!=-1)return saved[n];
    saved[n]=fib2(n-1)+fib2(n-2);
    return saved[n];
}
int fib3(int n){
    if(n==0)return 0;
    int f=0,g=1;
    while(0<--n){
        g=g+f;
        f=g-f;//f=原先的g
    }
    return g;
}
int main(){
    int n;
    cin>>n;
    saved.resize(n+1,-1);
    cout<<fib1(n)<<endl;
    cout<<fib2(n)<<endl;
    cout<<fib3(n)<<endl;
    return 0;
}