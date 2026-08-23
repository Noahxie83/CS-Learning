#include <iostream>
using namespace std;
int hailstone(int n){
    int len=1;
    while (1<n){
        if (n%2==0){
            n/=2;
        }
        else {
            n=3*n+1;
        }
        len++;
    }
    return len;
}
int main(){
    int n;
    cin>>n;
    cout<<hailstone(n)<<endl;
    return 0;
}