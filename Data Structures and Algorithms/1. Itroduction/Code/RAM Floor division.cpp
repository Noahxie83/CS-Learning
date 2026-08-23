#include <iostream>
using namespace std;
int main(){
    int R[4],c=12,d=5;
    R[0]=c+1;
    R[1]=d;
    R[2]=0;
    R[3]=1;
    while(true){
        R[0]=R[0]-R[1];
        if(R[0]<=0){
            break;
        }
        R[2]=R[2]+R[3];
    }
    cout<<R[2];
    return 0;
}